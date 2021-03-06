/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library


@interface CoreDAVLogging : NSObject {
	CFDictionaryRef _logDelegates;	// 4 = 0x4
}
+ (id)sharedLogging;	// 0x339ee6f1
- (id)init;	// 0x339ee739
- (CFSetRef)_delegatesToLogForProvider:(id)provider;	// 0x339ee8a9
- (BOOL)_shouldOutputAtLevel:(int)level forAccountInfoProvider:(id)accountInfoProvider;	// 0x339ee98d
- (void)addLogDelegate:(id)delegate forAccountInfoProvider:(id)accountInfoProvider;	// 0x339ee7dd
- (void)dealloc;	// 0x339ee79d
- (CFSetRef)delegatesToLogTransmittedDataForAccountInfoProvider:(id)accountInfoProvider;	// 0x339eea0d
- (void)logDiagnosticForProvider:(id)provider withLevel:(int)level format:(id)format args:(void *)args;	// 0x339eea4d
- (void)removeLogDelegate:(id)delegate forAccountInfoProvider:(id)accountInfoProvider;	// 0x339ee861
- (BOOL)shouldLogAtLevel:(int)level forAccountInfoProvider:(id)accountInfoProvider;	// 0x339ee90d
@end

