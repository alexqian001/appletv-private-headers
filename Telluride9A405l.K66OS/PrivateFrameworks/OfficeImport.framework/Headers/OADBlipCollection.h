/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADBlipCollection : NSObject {
@private
	NSMutableArray *mBlips;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *blips;	// G=0x30d76b71; S=0x30e7f709; @synthesize=mBlips
- (id)init;	// 0x30c8cc39
- (unsigned long)addBlip:(id)blip;	// 0x30c9f869
- (id)blipAtIndex:(long)index;	// 0x30ca8b15
- (unsigned long)blipCount;	// 0x30e7f6e9
// declared property getter: - (id)blips;	// 0x30d76b71
- (void)dealloc;	// 0x30c72955
// declared property setter: - (void)setBlips:(id)blips;	// 0x30e7f709
@end
