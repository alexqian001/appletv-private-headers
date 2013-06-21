/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSObject.h> // Unknown library

@class AccountsManager, NSArray, NoteContext;

@interface AccountUtilities : NSObject {
	AccountsManager *_accountsManager;	// 4 = 0x4
	NSArray *_syncableAccounts;	// 8 = 0x8
	NoteContext *_noteContext;	// 12 = 0xc
}
@property(readonly, retain) AccountsManager *accountsManager;	// G=0x347eee69; converted property
+ (id)sharedAccountUtilities;	// 0x347eede9
- (id)init;	// 0x347ef065
- (void).cxx_destruct;	// 0x347f0641
- (void)accountsChanged;	// 0x347eeed5
// converted property getter: - (id)accountsManager;	// 0x347eee69
- (id)allDisplayAccounts;	// 0x347ef2c5
- (id)allSyncableAccounts;	// 0x347ef259
- (void)dealloc;	// 0x347ef20d
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)desiredSyncId;	// 0x347efc05
- (BOOL)isDeviceLocalAccount:(id)account;	// 0x347f0245
- (BOOL)localNotesExist;	// 0x347f02d9
- (id)syncAccountIdForDisplayAccountId:(id)displayAccountId;	// 0x347ef82d
@end
