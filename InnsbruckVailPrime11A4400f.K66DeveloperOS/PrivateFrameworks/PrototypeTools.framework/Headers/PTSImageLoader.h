/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import </libobjc.A.h>

@class NSString;
@protocol PTSImageLoaderDelegate;

@interface PTSImageLoader : NSObject {
	NSString *_path;	// 4 = 0x4
	BOOL _loading;	// 8 = 0x8
	id<PTSImageLoaderDelegate> _delegate;	// 12 = 0xc
}
@property(assign, nonatomic) __weak id<PTSImageLoaderDelegate> delegate;	// G=0x325aa5a9; S=0x325aa5c9; @synthesize=_delegate
@property(assign, getter=isLoading) BOOL loading;	// G=0x325aa5dd; S=0x325aa5f5; @synthesize=_loading
- (id)initWithPath:(id)path;	// 0x325aa05d
- (void).cxx_destruct;	// 0x325aa60d
// declared property getter: - (id)delegate;	// 0x325aa5a9
// declared property getter: - (BOOL)isLoading;	// 0x325aa5dd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x325aa5c9
// declared property setter: - (void)setLoading:(BOOL)loading;	// 0x325aa5f5
- (void)startLoading;	// 0x325aa0bd
- (void)stopLoading;	// 0x325aa595
@end
