/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class NSString;

@interface WMSymbolMapper : CMMapper {
	unsigned short mCharacter;	// 8 = 0x8
	NSString *mFontName;	// 12 = 0xc
}
+ (unsigned short)mapWindingsCharacter:(unsigned short)character;	// 0x34944221
+ (unsigned short)mapZapfDingbatsCharacter:(unsigned short)character;	// 0x349d7319
- (id)initWithWDSymbol:(id)wdsymbol parent:(id)parent;	// 0x34943fc5
- (void)mapAt:(id)at withState:(id)state;	// 0x34944071
@end

