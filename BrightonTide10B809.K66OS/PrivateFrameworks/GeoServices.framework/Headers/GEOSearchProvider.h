/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library


@interface GEOSearchProvider : NSObject {
	id _error;	// 4 = 0x4
}
@property(copy, nonatomic) id error;	// G=0x33f75ad9; S=0x33f6c9a1; @synthesize=_error
+ (unsigned short)provider;	// 0x33f9dabd
- (void)cancel;	// 0x33f9dac5
- (void)dealloc;	// 0x33f70301
// declared property getter: - (id)error;	// 0x33f75ad9
- (void)search:(id)search timeout:(int)timeout useBackgroundConnection:(BOOL)connection finished:(id)finished spellingSuggestion:(id)suggestion refinement:(id)refinement error:(id)error isCompletions:(BOOL)completions;	// 0x33f9dac1
// declared property setter: - (void)setError:(id)error;	// 0x33f6c9a1
@end
