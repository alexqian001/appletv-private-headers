/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import </libobjc.A.h>
#import "CoreThemeDefinition-Structs.h"

@class CoreThemeDocument;

@interface TDThemeSchema : NSObject {
	CoreThemeDocument *_doc;	// 4 = 0x4
}
+ (BOOL)loadThemeConstantsForEntity:(id)entity inContext:(id)context;	// 0x30742bdd
- (id)initWithThemeDocument:(id)themeDocument;	// 0x3073f081
- (void)_addSchemaPartDefinitionsForStandardElement:(const XXStruct_el0qVC *)standardElement withElement:(id)element;	// 0x307408fd
- (BOOL)_renditionKey:(const renditionkeytoken *)key isEqualToKeyIgnoringLook:(const renditionkeytoken *)keyIgnoringLook;	// 0x30741781
- (void)_sanityCheckMetafontSizeSelectorsAndUpdateIfNecessary;	// 0x3073fba9
- (void)_sanityCheckObjectsWithEntityName:(id)entityName globalDescriptor:(void *)descriptor matchIdentifierOnly:(BOOL)only;	// 0x3073f121
- (void)_sanityCheckSchemaAssets;	// 0x3074179d
- (void)_sanityCheckSchemaCategoriesAndUpdateIfNecessary;	// 0x30740a4d
- (void)_sanityCheckSchemaDefinitionsAndUpdateIfNecessary;	// 0x30740eed
- (void)_sanityCheckSchemaPartDefinitionsForStandardElement:(const XXStruct_el0qVC *)standardElement withElement:(id)element;	// 0x3074018d
- (void)dealloc;	// 0x3073f0d5
- (void)loadArtworkDraftTypes;	// 0x30743e89
- (void)loadBasicThemePart;	// 0x30742945
- (void)loadColorNames;	// 0x30743bb9
- (void)loadColorStatuses;	// 0x30743d01
- (void)loadDefaultFontCustomizations;	// 0x3074431d
- (void)loadEffectConstants;	// 0x30744505
- (void)loadIterationTypes;	// 0x30743371
- (void)loadMetafontSelectors;	// 0x30743fed
- (void)loadMetafontSizes;	// 0x30744151
- (void)loadRenditionSubtypes;	// 0x307438ed
- (void)loadRenditionTypes;	// 0x30743785
- (void)loadSchemaCategories;	// 0x30744945
- (void)loadSchemaDefinitions;	// 0x30744b1d
- (void)loadStandardEffectDefinitions;	// 0x30744785
- (void)loadThemeDefaultLook;	// 0x30743641
- (void)loadThemeDirections;	// 0x30742f45
- (void)loadThemeDrawingLayers;	// 0x307430a9
- (void)loadThemeElements;	// 0x30742631
- (void)loadThemeIdioms;	// 0x3074320d
- (void)loadThemeLooks;	// 0x307434d5
- (void)loadThemeParts;	// 0x307427bd
- (void)loadThemePresentationStates;	// 0x30742de1
- (void)loadThemeSizes;	// 0x30742369
- (void)loadThemeStates;	// 0x30742a79
- (void)loadThemeValues;	// 0x307424cd
- (void)loadZeroCodeArtworkInfo;	// 0x30743a55
- (void)resetThemeConstants;	// 0x30744e49
- (void)sanityCheckAndUpdateDocumentIfNecessary;	// 0x307420a5
@end

