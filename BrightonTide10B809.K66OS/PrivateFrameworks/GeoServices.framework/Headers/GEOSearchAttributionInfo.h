/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString;

@interface GEOSearchAttributionInfo : NSObject {
	NSString *_identifier;	// 4 = 0x4
	unsigned _version;	// 8 = 0x8
	NSString *_logoPath;	// 12 = 0xc
	NSString *_snippetLogoPath;	// 16 = 0x10
	NSString *_displayName;	// 20 = 0x14
	NSArray *_attributionApps;	// 24 = 0x18
	unsigned _attributionRequirementsMask;	// 28 = 0x1c
}
@property(retain, nonatomic) NSArray *attributionApps;	// G=0x34018351; S=0x34018361; @synthesize=_attributionApps
@property(retain, nonatomic) NSString *displayName;	// G=0x34018331; S=0x34018341; @synthesize=_displayName
@property(retain, nonatomic) NSString *identifier;	// G=0x340182b1; S=0x340182c1; @synthesize=_identifier
@property(retain, nonatomic) NSString *logoPath;	// G=0x340182f1; S=0x34018301; @synthesize=_logoPath
@property(assign, nonatomic) unsigned requirementsMask;	// G=0x34018371; S=0x34018381; @synthesize=_attributionRequirementsMask
@property(retain, nonatomic) NSString *snippetLogoPath;	// G=0x34018311; S=0x34018321; @synthesize=_snippetLogoPath
@property(assign, nonatomic) unsigned version;	// G=0x340182d1; S=0x340182e1; @synthesize=_version
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x34017c1d
- (id)initWithSource:(id)source localizedAttribution:(id)attribution logoPath:(id)path snippetLogoPath:(id)path4;	// 0x34017aa5
// declared property getter: - (id)attributionApps;	// 0x34018351
- (void)dealloc;	// 0x34018225
- (id)description;	// 0x34018199
- (id)dictionaryRepresentation;	// 0x34017f05
// declared property getter: - (id)displayName;	// 0x34018331
- (BOOL)hasAttributionRequirement:(int)requirement;	// 0x34018209
// declared property getter: - (id)identifier;	// 0x340182b1
// declared property getter: - (id)logoPath;	// 0x340182f1
// declared property getter: - (unsigned)requirementsMask;	// 0x34018371
// declared property setter: - (void)setAttributionApps:(id)apps;	// 0x34018361
// declared property setter: - (void)setDisplayName:(id)name;	// 0x34018341
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x340182c1
// declared property setter: - (void)setLogoPath:(id)path;	// 0x34018301
// declared property setter: - (void)setRequirementsMask:(unsigned)mask;	// 0x34018381
// declared property setter: - (void)setSnippetLogoPath:(id)path;	// 0x34018321
// declared property setter: - (void)setVersion:(unsigned)version;	// 0x340182e1
// declared property getter: - (id)snippetLogoPath;	// 0x34018311
// declared property getter: - (unsigned)version;	// 0x340182d1
@end

