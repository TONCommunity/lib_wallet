// This file is part of Desktop App Toolkit,
// a set of libraries for developing nice desktop applications.
//
// For license and copyright information please follow this link:
// https://github.com/desktop-app/legal/blob/master/LEGAL
//
#pragma once

namespace Wallet::details {

void LogMessage(const QString &text);

} // namespace Wallet::details

#define WALLET_LOG(DATA) ::Wallet::details::LogMessage(QString DATA);
