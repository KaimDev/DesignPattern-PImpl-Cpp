//
// Created by johan on 10/7/22.
//

#ifndef PIMPL_WORKERS_H
#define PIMPL_WORKERS_H

#include <memory>

namespace Workers
{
    enum class Gender
    {
        Undefined,
        Male,
        Female
    };

    class ClassWorkers
    {
    public:
        ClassWorkers(const Gender gender = Gender::Undefined,
                     const std::string_view name = " ",
                     const std::string_view job = " ") noexcept;
        void Write() noexcept;
        ~ClassWorkers();

    private:
        class PImplClassWorkers;
        std::unique_ptr<PImplClassWorkers> m_PImpl;
    };
};

#endif //PIMPL_WORKERS_H
