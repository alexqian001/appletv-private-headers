/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MLEQPreset : NSObject {
@private
	NSString *_name;	// 4 = 0x4
	NSString *_localizedName;	// 8 = 0x8
	int _builtInPresetType;	// 12 = 0xc
}
@property(readonly, assign) int builtInPresetType;	// G=0x317f57dd; converted property
@property(readonly, retain) NSString *localizedName;	// G=0x317f57cd; converted property
@property(readonly, retain) NSString *name;	// G=0x317f57bd; converted property
+ (id)eqPresetForBuiltInPresetType:(int)presetType;	// 0x317f5859
+ (id)eqPresetForName:(id)name;	// 0x317dc1d9
- (id)initWithBuiltInPresetType:(int)presetType;	// 0x317f5de1
// converted property getter: - (int)builtInPresetType;	// 0x317f57dd
- (void)dealloc;	// 0x317f57fd
// converted property getter: - (id)localizedName;	// 0x317f57cd
// converted property getter: - (id)name;	// 0x317f57bd
- (int)typeForAVController;	// 0x317f57ed
@end
