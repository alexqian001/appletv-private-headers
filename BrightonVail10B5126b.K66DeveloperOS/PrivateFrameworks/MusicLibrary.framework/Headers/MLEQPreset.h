/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MLEQPreset : NSObject {
	NSString *_name;	// 4 = 0x4
	NSString *_localizedName;	// 8 = 0x8
	int _builtInPresetType;	// 12 = 0xc
}
@property(readonly, assign) int builtInPresetType;	// G=0x346b2951; converted property
@property(readonly, retain) NSString *localizedName;	// G=0x346b293d; converted property
@property(readonly, retain) NSString *name;	// G=0x346b2929; converted property
+ (id)eqPresetForBuiltInPresetType:(int)presetType;	// 0x346b2825
+ (id)eqPresetForName:(id)name;	// 0x34693a15
- (id)initWithBuiltInPresetType:(int)presetType;	// 0x346b2791
- (void).cxx_destruct;	// 0x346b297d
// converted property getter: - (int)builtInPresetType;	// 0x346b2951
// converted property getter: - (id)localizedName;	// 0x346b293d
// converted property getter: - (id)name;	// 0x346b2929
- (int)typeForAVController;	// 0x346b2961
@end
