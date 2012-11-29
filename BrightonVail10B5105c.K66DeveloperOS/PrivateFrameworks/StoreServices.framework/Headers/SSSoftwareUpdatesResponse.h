/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSError;

@interface SSSoftwareUpdatesResponse : NSObject {
	NSError *_error;	// 4 = 0x4
	BOOL _failed;	// 8 = 0x8
	NSArray *_updateItems;	// 12 = 0xc
}
@property(readonly, assign) NSError *error;	// G=0x3584dc01; 
@property(readonly, assign, getter=isFailed) BOOL failed;	// G=0x3584dc39; 
@property(readonly, assign) NSArray *updateItems;	// G=0x3584dc49; 
- (id)initWithError:(id)error;	// 0x3584db31
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3584e099
- (id)copyUpdateItemDictionaries;	// 0x3584dd51
- (id)copyXPCEncoding;	// 0x3584e009
- (void)dealloc;	// 0x3584db9d
- (id)description;	// 0x3584dc81
// declared property getter: - (id)error;	// 0x3584dc01
// declared property getter: - (BOOL)isFailed;	// 0x3584dc39
- (void)setUpdateItemsWithItemDictionaries:(id)itemDictionaries;	// 0x3584de59
// declared property getter: - (id)updateItems;	// 0x3584dc49
@end
