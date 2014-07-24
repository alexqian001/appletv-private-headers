/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVRadioHistoryController, ATVDataQuery, ATVDataClient, NSArray;

__attribute__((visibility("hidden")))
@interface ATVRadioWishListDataSource : XXUnknownSuperclass {
	BOOL _spinnerShown;	// 4 = 0x4
	BOOL _active;	// 5 = 0x5
	ATVDataClient *_dataClient;	// 8 = 0x8
	ATVRadioHistoryController *_historyController;	// 12 = 0xc
	ATVDataQuery *_itemsQuery;	// 16 = 0x10
	NSArray *_wishListSectionData;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL active;	// G=0x88281; S=0x8764d; @synthesize=_active
@property(assign, nonatomic) __weak ATVDataClient *dataClient;	// G=0x881a9; S=0x881c9; @synthesize=_dataClient
@property(assign, nonatomic) __weak ATVRadioHistoryController *historyController;	// G=0x881dd; S=0x881fd; @synthesize=_historyController
@property(retain, nonatomic) ATVDataQuery *itemsQuery;	// G=0x88211; S=0x88221; @synthesize=_itemsQuery
@property(retain, nonatomic) NSArray *wishListSectionData;	// G=0x88249; S=0x88259; @synthesize=_wishListSectionData
- (id)initWithDataClient:(id)dataClient historyController:(id)controller;	// 0x874c9
- (void).cxx_destruct;	// 0x88291
- (void)_dataClientDataUpdated:(id)updated;	// 0x87df5
- (void)_executeQuery;	// 0x87789
- (void)_showNoItemsView;	// 0x87c59
- (void)_updateView;	// 0x87b01
// declared property getter: - (BOOL)active;	// 0x88281
// declared property getter: - (id)dataClient;	// 0x881a9
- (void)dealloc;	// 0x875cd
// declared property getter: - (id)historyController;	// 0x881dd
// declared property getter: - (id)itemsQuery;	// 0x88211
// declared property setter: - (void)setActive:(BOOL)active;	// 0x8764d
// declared property setter: - (void)setDataClient:(id)client;	// 0x881c9
// declared property setter: - (void)setHistoryController:(id)controller;	// 0x881fd
// declared property setter: - (void)setItemsQuery:(id)query;	// 0x88221
// declared property setter: - (void)setWishListSectionData:(id)data;	// 0x88259
// declared property getter: - (id)wishListSectionData;	// 0x88249
@end
