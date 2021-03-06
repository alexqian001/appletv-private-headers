/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColorPalette.h"
#import "EDCollection.h"


__attribute__((visibility("hidden")))
@interface EDColorsCollection : EDCollection <OADColorPalette> {
@private
	unsigned mDefaultColorsCount;	// 8 = 0x8
}
+ (bool)isSystemColorId:(unsigned)anId;	// 0x343b25b1
+ (int)oadSchemeColorIdFromThemeIndex:(int)themeIndex;	// 0x3451f321
+ (int)systemColorIdFromIndex:(unsigned)index;	// 0x343b25c9
+ (unsigned)xlColorIndexFromCPSystemColorIDEnum:(int)cpsystemColorIDEnum;	// 0x345a699d
- (id)initWithDefaultSetup:(bool)defaultSetup;	// 0x344b3fe5
- (void)addColors:(const unsigned *)colors count:(unsigned long)count defaultColors:(const unsigned *)colors3 defaultCount:(unsigned)count4;	// 0x344b973d
- (void)addDefaultPalette;	// 0x345a69c9
- (unsigned)addOrEquivalentColorExcludingDefaults:(id)defaults;	// 0x344e6161
- (void)addPalette:(const unsigned *)palette paletteSize:(unsigned long)size paletteX:(const unsigned *)x paletteXSize:(unsigned)size4;	// 0x344b9619
- (id)colorWithIndex:(unsigned)index;	// 0x344be53d
- (unsigned)defaultColorsCount;	// 0x345a698d
- (void)setupDefaults;	// 0x344b4035
@end

