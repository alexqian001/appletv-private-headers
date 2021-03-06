/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSOperation.h> // Unknown library

@class MRContext;
@protocol MRLoadableProvider;

@interface MRProviderPreloadOperation : NSOperation {
	id<MRLoadableProvider> mProvider;	// 12 = 0xc
	double mTime;	// 16 = 0x10
	MRContext *mContext;	// 24 = 0x18
}
- (id)initWithProvider:(id)provider time:(double)time andContext:(id)context;	// 0x332d4355
- (void)dealloc;	// 0x332d43f1
- (void)main;	// 0x332d4469
@end

