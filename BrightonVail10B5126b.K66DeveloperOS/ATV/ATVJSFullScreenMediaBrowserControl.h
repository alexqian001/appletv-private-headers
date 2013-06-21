/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVMerchant, ATVFullScreenPhotoBrowserController;

__attribute__((visibility("hidden")))
@interface ATVJSFullScreenMediaBrowserControl : XXUnknownSuperclass {
	ATVFullScreenPhotoBrowserController *_controller;	// 4 = 0x4
	ATVMerchant *_merchant;	// 8 = 0x8
	id _jsInfo;	// 12 = 0xc
	int _type;	// 16 = 0x10
}
@property(retain, nonatomic) ATVFullScreenPhotoBrowserController *controller;	// G=0x3f88e9; S=0x3f7709; @synthesize=_controller
@property(retain) id jsInfo;	// G=0x3f8919; S=0x3f892d; @synthesize=_jsInfo
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x3f88f9; S=0x3f8909; @synthesize=_merchant
@property(assign, nonatomic) int type;	// G=0x3f893d; S=0x3f894d; @synthesize=_type
- (id)initWithMerchant:(id)merchant;	// 0x3f7605
// declared property getter: - (id)controller;	// 0x3f88e9
- (void)dealloc;	// 0x3f764d
- (void)hide;	// 0x3f8879
// declared property getter: - (id)jsInfo;	// 0x3f8919
// declared property getter: - (id)merchant;	// 0x3f88f9
- (void)selectItemAtIndex:(int)index;	// 0x3f76b9
// declared property setter: - (void)setController:(id)controller;	// 0x3f7709
// declared property setter: - (void)setJsInfo:(id)info;	// 0x3f892d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x3f8909
// declared property setter: - (void)setType:(int)type;	// 0x3f894d
- (void)showWithType:(int)type couplingObject:(id)object callback:(id)callback propertyCallback:(id)callback4 completionCallback:(id)callback5;	// 0x3f7771
// declared property getter: - (int)type;	// 0x3f893d
- (void)updateItemMetadata:(id)metadata forPhotoWithID:(id)anId;	// 0x3f8495
- (void)updateItemMetadataLiked:(id)liked forPhotoWithID:(id)anId;	// 0x3f8611
- (void)updateItems:(id)items initialSelection:(int)selection;	// 0x3f8465
@end
