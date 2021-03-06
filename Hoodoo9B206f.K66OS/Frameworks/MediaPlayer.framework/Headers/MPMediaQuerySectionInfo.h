/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSMutableCopying.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSArray *_sections;	// 4 = 0x4
	NSArray *_sectionIndexTitles;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x303c8f6d; 
@property(copy, nonatomic) NSArray *sectionIndexTitles;	// G=0x303c8fcd; S=0x303c8fdd; @synthesize=_sectionIndexTitles
@property(readonly, assign, nonatomic) NSArray *sections;	// G=0x303c8fbd; @synthesize=_sections
- (id)initWithCoder:(id)coder;	// 0x303c8c39
- (id)copyWithZone:(NSZone *)zone;	// 0x303c8bb9
// declared property getter: - (unsigned)count;	// 0x303c8f6d
- (void)dealloc;	// 0x303c8b59
- (id)description;	// 0x303c8b39
- (void)encodeWithCoder:(id)coder;	// 0x303c8cc9
- (unsigned)indexOfSectionForSectionIndexTitleAtIndex:(unsigned)index;	// 0x303c8db5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x303c8d39
// declared property getter: - (id)sectionIndexTitles;	// 0x303c8fcd
// declared property getter: - (id)sections;	// 0x303c8fbd
// declared property setter: - (void)setSectionIndexTitles:(id)titles;	// 0x303c8fdd
@end

