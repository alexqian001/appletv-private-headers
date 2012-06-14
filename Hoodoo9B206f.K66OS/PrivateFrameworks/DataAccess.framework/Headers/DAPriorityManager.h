/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library


@interface DAPriorityManager : NSObject {
@private
	CFDictionaryRef _clientsToPriorityRequests;	// 4 = 0x4
	int _foregroundDataclasses;	// 8 = 0x8
	int _currentPriority;	// 12 = 0xc
}
@property(readonly, assign) CFDictionaryRef clientsToPriorityRequests;	// G=0x31ecf05d; @synthesize=_clientsToPriorityRequests
@property(readonly, assign) int currentPriority;	// G=0x31ecf06d; @synthesize=_currentPriority
+ (id)sharedManager;	// 0x31ecdf89
+ (void)vendPriorityManagers;	// 0x31ecdf79
- (id)init;	// 0x31ece271
- (void)_SBApplicationStateChanged:(id)changed;	// 0x31ece145
- (id)_appIDsToDataclasses;	// 0x31ece001
- (int)_recalculatePriority;	// 0x31ece841
- (void)_setForegroundDataclasses:(int)dataclasses;	// 0x31ece5b5
- (void)_setNewPriority;	// 0x31ecea3d
- (void)bumpDataclassesToUIPriority:(int)uipriority;	// 0x31ecee9d
// declared property getter: - (CFDictionaryRef)clientsToPriorityRequests;	// 0x31ecf05d
// declared property getter: - (int)currentPriority;	// 0x31ecf06d
- (void)dealloc;	// 0x31ece4f9
- (void)requestPriority:(int)priority forClient:(id)client dataclasses:(int)dataclasses;	// 0x31eceac1
- (id)stateString;	// 0x31ece5c5
@end
