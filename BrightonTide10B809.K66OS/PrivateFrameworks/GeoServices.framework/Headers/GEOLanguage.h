/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GEOLanguage : PBCodable {
	unsigned _identifier;	// 4 = 0x4
	NSMutableArray *_languages;	// 8 = 0x8
}
@property(assign, nonatomic) unsigned identifier;	// G=0x33ffcca9; S=0x33ffccb9; @synthesize=_identifier
@property(retain, nonatomic) NSMutableArray *languages;	// G=0x33ffccc9; S=0x33ffccd9; @synthesize=_languages
- (void)addLanguage:(id)language;	// 0x33ffc6b5
- (void)clearLanguages;	// 0x33ffc695
- (void)copyTo:(id)to;	// 0x33ffcb35
- (void)dealloc;	// 0x33ffc651
- (id)description;	// 0x33ffc761
- (id)dictionaryRepresentation;	// 0x33ffc7d1
- (unsigned)hash;	// 0x33ffcc61
// declared property getter: - (unsigned)identifier;	// 0x33ffcca9
- (BOOL)isEqual:(id)equal;	// 0x33ffcbd9
- (id)languageAtIndex:(unsigned)index;	// 0x33ffc741
// declared property getter: - (id)languages;	// 0x33ffccc9
- (unsigned)languagesCount;	// 0x33ffc721
- (BOOL)readFrom:(id)from;	// 0x33ffca41
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x33ffccb9
// declared property setter: - (void)setLanguages:(id)languages;	// 0x33ffccd9
- (void)writeTo:(id)to;	// 0x33ffca4d
@end

