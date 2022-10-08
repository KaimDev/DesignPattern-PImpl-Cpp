//
// Created by johan on 10/7/22.
//

#include "Workers.h"
#include <string>
#include <iostream>
#include <memory>

using namespace Workers;

//declaration
constexpr std::string_view GenderConverter(Gender gen);

class ClassWorkers::PImplClassWorkers
{
public:
    PImplClassWorkers(const Gender gender, const std::string_view name, const std::string_view job) noexcept:
        m_Name{name},
        m_Job{job},
        m_Gender{gender}
    { }

    ~PImplClassWorkers() = default;

    std::string_view m_Name;
    std::string_view m_Job;
    Gender           m_Gender;
};

ClassWorkers::ClassWorkers(const Gender gender,
                           const std::string_view name,
                           std::string_view job) noexcept: m_PImpl{ std::make_unique<PImplClassWorkers>(gender, name, job) }
{ };

void ClassWorkers::Write() noexcept
{
    std::cout << "Name: " << m_PImpl->m_Name << std::endl
              << "Gender: " << GenderConverter(m_PImpl->m_Gender) << std::endl
              << "Job: " << m_PImpl->m_Job << std::endl;
}

ClassWorkers::~ClassWorkers() = default;

constexpr std::string_view GenderConverter(Gender gen)
{
    switch (gen)
    {
        case Gender::Male:      return "Male";
        case Gender::Female:    return "Female";
        case Gender::Undefined: return "Undefined";
    };
    return " ";
}

