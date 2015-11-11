// Copyright (c) 2006, 2007 Julio M. Merino Vidal
// Copyright (c) 2008 Ilya Sokolov, Boris Schaeling
// Copyright (c) 2009 Boris Schaeling
// Copyright (c) 2010 Felipe Tanus, Boris Schaeling
// Copyright (c) 2011, 2012 Jeff Flinn, Boris Schaeling
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_PROCESS_POSIX_INITIALIZERS_HPP
#define BOOST_PROCESS_POSIX_INITIALIZERS_HPP

#include "initializers/bind_fd.hpp"
#include "initializers/bind_stderr.hpp"
#include "initializers/bind_stdin.hpp"
#include "initializers/bind_stdout.hpp"
#include "initializers/close_fd.hpp"
#include "initializers/close_fds.hpp"
#include "initializers/close_fds_if.hpp"
#include "initializers/close_stderr.hpp"
#include "initializers/close_stdin.hpp"
#include "initializers/close_stdout.hpp"
#include "initializers/hide_console.hpp"
#include "initializers/inherit_env.hpp"
#include "initializers/notify_io_service.hpp"
#include "initializers/on_exec_error.hpp"
#include "initializers/on_exec_setup.hpp"
#include "initializers/on_fork_error.hpp"
#include "initializers/on_fork_setup.hpp"
#include "initializers/on_fork_success.hpp"
#include "initializers/run_exe.hpp"
#include "initializers/set_args.hpp"
#include "initializers/set_cmd_line.hpp"
#include "initializers/set_env.hpp"
#include "initializers/set_on_error.hpp"
#include "initializers/start_in_dir.hpp"
#include "initializers/throw_on_error.hpp"

#endif