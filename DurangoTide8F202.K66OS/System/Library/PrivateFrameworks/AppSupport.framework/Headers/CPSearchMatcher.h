/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSData;

@interface CPSearchMatcher : NSObject {
	NSArray *_components;	// 4 = 0x4
	NSData *_context;	// 8 = 0x8
	BOOL _contextIsDiacriticSensitive;	// 12 = 0xc
}
- (id)initWithSearchString:(id)searchString;	// 0x321611b9
- (id)initWithSearchString:(id)searchString andLocale:(id)locale;	// 0x32161195
- (id)initWithSearchString:(id)searchString andLocale:(id)locale andOptions:(int)options;	// 0x32161305
- (id)initWithSearchString:(id)searchString options:(int)options;	// 0x32161175
- (void)dealloc;	// 0x32161531
- (BOOL)matches:(id)matches;	// 0x321611d9
- (BOOL)matchesUTF8String:(const char *)string;	// 0x32161209
@end
