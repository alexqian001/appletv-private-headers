/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import "ISDataProvider.h"
#import "iTunesStore-Structs.h"


@interface ISReviewProvider : ISDataProvider <NSCopying> {
	BOOL _backgroundReview;	// 40 = 0x28
}
@property(assign, getter=isBackgroundReview) BOOL backgroundReview;	// G=0x355489fd; S=0x35548a0d; @synthesize=_backgroundReview
- (id)copyWithZone:(NSZone *)zone;	// 0x355487a1
// declared property getter: - (BOOL)isBackgroundReview;	// 0x355489fd
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x355487f5
// declared property setter: - (void)setBackgroundReview:(BOOL)review;	// 0x35548a0d
@end
