/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDataSource.h"
#import <NSObject.h> // Unknown library

@class NSArray, ABModel, AccountsManager, ACAccountStore, NSDictionary;

@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource> {
	ABModel *_model;	// 4 = 0x4
	NSArray *_accountIdentifiers;	// 8 = 0x8
	NSArray *_accountDisplayNames;	// 12 = 0xc
	NSDictionary *_groupsByAccountIdentifier;	// 16 = 0x10
	BOOL _hidesSearchableSources;	// 20 = 0x14
	BOOL _hidesGlobalGroupWrapper;	// 21 = 0x15
	AccountsManager *_accountsManager;	// 24 = 0x18
	ACAccountStore *_accountStore;	// 28 = 0x1c
	BOOL _dirty;	// 32 = 0x20
}
@property(retain, nonatomic) ACAccountStore *accountStore;	// G=0x376681b1; S=0x376695e9; @synthesize=_accountStore
@property(retain, nonatomic) AccountsManager *accountsManager;	// G=0x37668171; S=0x376695d9; @synthesize=_accountsManager
@property(assign, nonatomic, getter=isDirty) BOOL dirty;	// G=0x376695f9; S=0x37669609; @synthesize=_dirty
@property(assign, nonatomic) BOOL hidesGlobalGroupWrapper;	// G=0x376695b9; S=0x376695c9; @synthesize=_hidesGlobalGroupWrapper
@property(assign, nonatomic) BOOL hidesSearchableSources;	// G=0x37669599; S=0x376695a9; @synthesize=_hidesSearchableSources
@property(retain, nonatomic) ABModel *model;	// G=0x37669619; S=0x37669629; @synthesize=_model
- (id)init;	// 0x37668079
- (id)accountDisplayNameAtIndex:(int)index;	// 0x37669205
// declared property getter: - (id)accountStore;	// 0x376681b1
// declared property getter: - (id)accountsManager;	// 0x37668171
- (void)cancelScheduledRefresh;	// 0x37669561
- (void)dealloc;	// 0x376680a5
- (id)defaultGroupWrapper;	// 0x376681f1
- (id)groupWrapperForIndexPath:(id)indexPath;	// 0x37668c5d
// declared property getter: - (BOOL)hidesGlobalGroupWrapper;	// 0x376695b9
// declared property getter: - (BOOL)hidesSearchableSources;	// 0x37669599
- (id)indexPathForGroupWrapper:(id)groupWrapper;	// 0x37668ce5
// declared property getter: - (BOOL)isDirty;	// 0x376695f9
// declared property getter: - (id)model;	// 0x37669619
- (id)newContactsFilterFromSelectedGroupWrappers;	// 0x37668e95
- (int)numberOfAccounts;	// 0x376691b5
- (int)numberOfGroupsForAccountIdentifier:(id)accountIdentifier;	// 0x37669409
- (int)numberOfGroupsInAccountAtIndex:(int)index;	// 0x37669139
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x376691f5
- (void)reloadData;	// 0x37668c49
- (void)reloadDataIncludingAccountsManager:(BOOL)manager usingArchivedState:(BOOL)state;	// 0x3766826d
- (void)scheduleRefresh;	// 0x37669441
// declared property setter: - (void)setAccountStore:(id)store;	// 0x376695e9
// declared property setter: - (void)setAccountsManager:(id)manager;	// 0x376695d9
// declared property setter: - (void)setDirty:(BOOL)dirty;	// 0x37669609
// declared property setter: - (void)setHidesGlobalGroupWrapper:(BOOL)wrapper;	// 0x376695c9
// declared property setter: - (void)setHidesSearchableSources:(BOOL)sources;	// 0x376695a9
// declared property setter: - (void)setModel:(id)model;	// 0x37669629
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x37669299
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x37669225
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x376691e1
@end
