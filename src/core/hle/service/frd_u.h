// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#pragma once

#include "core/hle/service/service.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
// Namespace FRD_U

namespace FRD_U {

    class Interface : public Service::Interface {
    public:
        Interface();
        ~Interface();
        /**
         * Gets the string port name used by CTROS for the service
         * @return Port name of service
         */
        std::string GetPortName() const override {
            return "frd:u";
        }
    };

} // namespace
