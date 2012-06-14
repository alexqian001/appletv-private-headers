/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOrthography.h"


@interface NSSimpleOrthography : NSOrthography {
	unsigned _orthographyFlags;	// 4 = 0x4
}
@property(readonly, assign) unsigned orthographyFlags;	// G=0x31dd3b5d; converted property
+ (void)initialize;	// 0x31dd3819
+ (id)orthographyWithFlags:(unsigned)flags;	// 0x31dd3865
- (id)initWithCoder:(id)coder;	// 0x31dd3a35
- (id)initWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x31dd3939
- (id)initWithFlags:(unsigned)flags;	// 0x31dd38a5
- (id)allLanguages;	// 0x31dd3c55
- (id)allScripts;	// 0x31dd3c39
- (Class)classForCoder;	// 0x31dd39b5
- (id)dominantLanguage;	// 0x31dd3c19
- (id)dominantLanguageForScript:(id)script;	// 0x31dd3bd5
- (id)dominantScript;	// 0x31dd3b21
- (void)encodeWithCoder:(id)coder;	// 0x31dd39c5
- (id)languageMap;	// 0x31dd3b41
- (id)languagesForScript:(id)script;	// 0x31dd3b6d
// converted property getter: - (unsigned)orthographyFlags;	// 0x31dd3b5d
@end
