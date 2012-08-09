/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABAbstractPropertyGroup.h"
#import "AddressBookUI-Structs.h"

@class ABCapabilitiesManager, NSMutableDictionary, NSMutableArray, NSString, ABActionsController;

@interface ABPropertyGroup : ABAbstractPropertyGroup {
	int _property;	// 20 = 0x14
	void *_context;	// 24 = 0x18
	NSMutableDictionary *_valuesByPerson;	// 28 = 0x1c
	NSMutableArray *_recordInfoDictionaries;	// 32 = 0x20
	NSMutableArray *_propertyLabels;	// 36 = 0x24
	NSMutableDictionary *_lineInfosByIndex;	// 40 = 0x28
	ABActionsController *_actionsController;	// 44 = 0x2c
	void *_defaultPolicy;	// 48 = 0x30
	NSMutableDictionary *_preinsertedRecordInfoDictionary;	// 52 = 0x34
	id _preinsertedValue;	// 56 = 0x38
	NSString *_preinsertedLabel;	// 60 = 0x3c
	NSMutableDictionary *_insertionRecordInfoDictionary;	// 64 = 0x40
	id _insertionValue;	// 68 = 0x44
	NSString *_insertionLabel;	// 72 = 0x48
	NSMutableDictionary *_recordInfoDictionaryForItemBeingDeleted;	// 76 = 0x4c
	NSMutableDictionary *_valueForItemBeingDeleted;	// 80 = 0x50
	NSString *_labelForItemBeingDeleted;	// 84 = 0x54
	int _lastIndexWithAddedItem;	// 88 = 0x58
	ABCapabilitiesManager *_capabilitiesManager;	// 92 = 0x5c
	BOOL _allowsVibrations;	// 96 = 0x60
	id _vibrationManager;	// 100 = 0x64
}
@property(assign) BOOL allowsVibrations;	// G=0x30fa495d; S=0x30fcd8b1; converted property
@property(readonly, assign) void *context;	// G=0x30fafc05; converted property
@property(readonly, assign) int property;	// G=0x30fa32b5; converted property
- (id)initWithProperty:(int)property context:(void *)context;	// 0x30fa25a9
- (void)_addValuesToCache;	// 0x30fa30bd
- (id)_allRecordInfosInRecordInfoDictionary:(id)recordInfoDictionary;	// 0x30fa63bd
- (id)_bestValueBetween:(id)between and:(id)anAnd;	// 0x30fcaaa9
- (BOOL)_canSaveAtIndex:(int)index;	// 0x30fa607d
- (void)_clearAllCachedInfo;	// 0x30fa3025
- (void *)_copyCachedValueForPerson:(void *)person;	// 0x30fa33f1
- (id)_findFuzzyMatchingValue:(id)value inDictionary:(id)dictionary;	// 0x30fcb361
- (void)_getAnyIdentifier:(int *)identifier person:(const void **)person propertyValue:(id *)value propertyLabel:(id *)label fromRecordInfoDictionary:(id)recordInfoDictionary;	// 0x30fa6221
- (void)_getFromCacheAnyPropertyValue:(id *)cacheAnyPropertyValue andLabel:(id *)label forRecordInfoDictionary:(id)recordInfoDictionary;	// 0x30fa61f9
- (void)_getFromCachePropertyValue:(id *)cachePropertyValue andLabel:(id *)label forPerson:(void *)person identifier:(int)identifier;	// 0x30fa643d
- (id)_getFromLineInfos:(id)lineInfos key:(id)key valueForKey:(id)key3;	// 0x30fb93a5
- (void)_getIndex:(int *)index andEditableFlag:(BOOL *)flag fromInfo:(id)info;	// 0x30fb34d5
- (BOOL)_hasNonNullSoundForIdentifier:(int)identifier;	// 0x30fca7bd
- (int)_indexFromInfo:(id)info;	// 0x30fb599d
- (void)_insertSingleValue:(id)value label:(id)label identifier:(int)identifier forPerson:(void *)person indicesAndLabelsForValuesSeenAlready:(id)valuesSeenAlready;	// 0x30fa3449
- (BOOL)_isBirthdayDate:(id)date equivalentTo:(id)to;	// 0x30fcb2b5
- (BOOL)_isEmptyValue:(id)value isPreinserted:(BOOL)preinserted;	// 0x30fa6519
- (BOOL)_isPropertyValue:(id)value equivalentTo:(id)to;	// 0x30fc3799
- (BOOL)_isSocialProfile:(id)profile equivalentTo:(id)to;	// 0x30fcb191
- (id)_newLocalizedCountryNameForCountryCode:(id)countryCode;	// 0x30fcab85
- (id)_newLocalizedPlaceholderForKey:(id)key;	// 0x30fb6a1d
- (id)_peopleInCache;	// 0x30fcabfd
- (BOOL)_propertyIsDate;	// 0x30fcab5d
- (BOOL)_recordInfoDictionary:(id)dictionary containsPerson:(void *)person;	// 0x30fc3821
- (id)_recordInfoDictionaryAtIndex:(int)index;	// 0x30fa4555
- (id)_recordInfoDictionaryForPerson:(void *)person;	// 0x30fcb67d
- (id)_recordInfoDictionaryForPerson:(void *)person identifier:(int)identifier;	// 0x30fa3aa9
- (id)_recordInfoDictionaryWithAllPeople;	// 0x30fcb47d
- (id)_recordInfoForPerson:(void *)person;	// 0x30fcb669
- (id)_recordInfoForPerson:(void *)person identifier:(int)identifier;	// 0x30fa3b79
- (void)_reloadPreinsertedStuff:(BOOL)stuff insertionStuff:(BOOL)stuff2;	// 0x30fa3c49
- (BOOL)_removeValueInCacheForPerson:(void *)person;	// 0x30fa50ad
- (void)_setCountryCode:(id)code atIndex:(int)index withCountryName:(BOOL)countryName;	// 0x30fa4b7d
- (void)_setPropertyLabel:(id)label atIndex:(int)index markChanged:(BOOL)changed;	// 0x30fcc0c5
- (void)_setRecordInfoDictionary:(id)dictionary atIndex:(int)index;	// 0x30fa45e5
- (BOOL)_setValueInCache:(void *)cache forPerson:(void *)person;	// 0x30fa3251
- (BOOL)_setValueInCache:(void *)cache forPerson:(void *)person preventLabelChange:(BOOL)change;	// 0x30fca6d9
- (id)_sortedPeople:(id)people;	// 0x30fa32c5
- (id)_stringRepresentationOfPropertyValue:(id)propertyValue;	// 0x30fb3549
- (BOOL)_updateCacheForPerson:(void *)person identifier:(int *)identifier value:(id)value label:(CFStringRef)label shouldSetValue:(BOOL)value5 shouldSetLabel:(BOOL)label6;	// 0x30fcad21
- (BOOL)_updateCacheWithPropertyLabel:(id)propertyLabel atIndex:(int)index;	// 0x30fcb109
- (BOOL)_updateCacheWithPropertyValue:(id)propertyValue atIndex:(int)index;	// 0x30fcb14d
- (BOOL)_updateCacheWithPropertyValue:(id)propertyValue propertyLabel:(id)label recordInfoDictionaryAtIndex:(unsigned)index shouldSetValue:(BOOL)value shouldSetLabel:(BOOL)label5;	// 0x30fcaee9
- (id)_valueForCheckingExistenceOfPropertyValue:(id)propertyValue;	// 0x30fa3929
- (id)_valueFromCacheForPerson:(void *)person;	// 0x30fca6b1
- (id)_vibrationManager;	// 0x30fcd8f9
- (id)accountBadgeFromInfo:(id)info whenEditing:(BOOL)editing;	// 0x30fcdd25
- (id)actionsControllerPreparedWithValueAtIndex:(int)index;	// 0x30fcda9d
- (id)actualPropertyLabelAtIndex:(int)index forPerson:(void *)person;	// 0x30fcc2ad
- (void)addPreinsertedItem;	// 0x30fcc989
- (int)alertIdentifierAtIndex:(int)index;	// 0x30fcd319
- (id)allRecordInfosAtIndex:(int)index;	// 0x30fa6f59
- (BOOL)allowsAdding;	// 0x30fb4ed5
- (BOOL)allowsAddingForPerson:(void *)person;	// 0x30fa42b5
// converted property getter: - (BOOL)allowsVibrations;	// 0x30fa495d
- (BOOL)areLabelsEditable;	// 0x30fcc0c1
- (BOOL)canDeleteAtIndex:(int)index editableFlag:(BOOL)flag;	// 0x30fb78a5
- (BOOL)canSave;	// 0x30fa602d
- (BOOL)canSaveAtIndex:(int)index editableFlag:(BOOL)flag;	// 0x30fa60c5
// converted property getter: - (void *)context;	// 0x30fafc05
- (id)countryCodeAtIndex:(int)index;	// 0x30fa4cb1
- (void)dealloc;	// 0x30fbd65d
- (id)description;	// 0x30fcb691
- (id)displayTextForInfo:(id)info;	// 0x30fb3455
- (BOOL)editableFlagFromInfo:(id)info;	// 0x30fb52f9
- (void)getAnyIdentifier:(int *)identifier andPerson:(const void **)person atIndex:(int)index;	// 0x30fc6479
- (void)getIndex:(int *)index andEditableFlag:(BOOL *)flag forRow:(int)row whenEditing:(BOOL)editing;	// 0x30fb1b71
- (BOOL)hasCallVibration;	// 0x30fcd599
- (BOOL)hasMultipleAlertsAtIndex:(int)index;	// 0x30fcd445
- (BOOL)hasRingtone;	// 0x30fcd561
- (BOOL)hasTextTone;	// 0x30fcd57d
- (BOOL)hasTextVibration;	// 0x30fcd5b5
- (int)indexOfCallVibrationInAlertEquivalentMultiValue;	// 0x30fa491d
- (int)indexOfIdentifier:(int)identifier person:(void *)person;	// 0x30fcdb2d
- (int)indexOfRingtoneInAlertEquivalentMultiValue;	// 0x30fa4901
- (int)indexOfTextToneInAlertEquivalentMultiValue;	// 0x30fa496d
- (int)indexOfTextVibrationInAlertEquivalentMultiValue;	// 0x30fa49ad
- (int)insertionIndex;	// 0x30fa46e1
- (BOOL)instantMessageServiceIsSupported;	// 0x30fa537d
- (BOOL)instantMessageServiceIsSupportedForPerson:(void *)person;	// 0x30fa5455
- (int)itemCount;	// 0x30fa4535
- (id)keyboardSettingsForKey:(id)key info:(id)info;	// 0x30fb676d
- (id)labelTextForInfo:(id)info;	// 0x30fb5759
- (id)lineInfosAtIndex:(int)index;	// 0x30fb8169
- (id)lineInfosForInfo:(id)info;	// 0x30fb8139
- (id)localizedPropertyLabelAtIndex:(int)index;	// 0x30fb59c5
- (BOOL)multiCellContentView:(id)view alwaysShowsClearButtonAtIndexPath:(id)indexPath;	// 0x30fce145
- (id)peopleFromInfo:(id)info whenEditing:(BOOL)editing;	// 0x30fcde71
- (id)placeholderTextForKey:(id)key info:(id)info;	// 0x30fb6935
- (void *)policyForPerson:(void *)person;	// 0x30fa4501
- (void)prepareActionsController:(id)controller withValueAtIndex:(int)index;	// 0x30fc67d1
// converted property getter: - (int)property;	// 0x30fa32b5
- (id)propertyLabelAtIndex:(int)index;	// 0x30fb5bc5
- (id)propertyLabelAtIndex:(int)index forceUseReadonly:(BOOL)readonly;	// 0x30fb5bd9
- (id)propertyValueAtIndex:(int)index;	// 0x30fa4d8d
- (id)propertyValueAtIndex:(int)index forceUseReadonly:(BOOL)readonly;	// 0x30fa4da1
- (id)propertyValueForInfo:(id)info;	// 0x30fb3485
- (void)refreshVibrations;	// 0x30fcd94d
- (void)reloadFromModel;	// 0x30fa28e5
- (BOOL)removeItemAtRow:(int)row;	// 0x30fcca81
- (BOOL)removeItemAtRow:(int)row whenEditing:(BOOL)editing;	// 0x30fcca99
- (int)rowCountWhenEditing:(BOOL)editing;	// 0x30fb1821
- (int)rowForIndex:(int)index editableFlag:(BOOL)flag whenEditing:(BOOL)editing;	// 0x30fcba79
- (id)rowsToDeleteInTransition:(BOOL)transition;	// 0x30fcbcd5
- (id)rowsToInsertInTransition:(BOOL)transition;	// 0x30fcbcf5
- (id)serviceAtIndex:(int)index;	// 0x30fa525d
// converted property setter: - (void)setAllowsVibrations:(BOOL)vibrations;	// 0x30fcd8b1
- (void)setCapabilitiesManager:(id)manager;	// 0x30fcd96d
- (void)setCountryCode:(id)code atIndex:(int)index;	// 0x30fccfcd
- (void)setDefaultPolicy:(void *)policy;	// 0x30fa47c5
- (BOOL)setEmptyValueAtIndex:(int)index editableFlag:(BOOL)flag whenEditing:(BOOL)editing;	// 0x30fcc479
- (BOOL)setEmptyValueAtRow:(int)row whenEditing:(BOOL)editing;	// 0x30fcc575
- (void)setPropertyLabel:(id)label atIndex:(int)index;	// 0x30fcc289
- (void)setPropertyValue:(id)value atIndex:(int)index;	// 0x30fa4ef9
- (void)setService:(id)service atIndex:(int)index;	// 0x30fa50c9
- (void)setValue:(id)value forKey:(id)key forIndex:(int)index;	// 0x30fcc5c5
- (id)shortServiceForService:(id)service;	// 0x30fc432d
- (BOOL)shouldDisambiguateNotes;	// 0x30fcd9b1
- (BOOL)shouldShowAlertsWhenEditing:(BOOL)editing;	// 0x30fcd831
- (BOOL)shouldShowCallVibrationWhenEditing:(BOOL)editing;	// 0x30fcd6fd
- (BOOL)shouldShowRingtoneWhenEditing:(BOOL)editing;	// 0x30fcd5d1
- (BOOL)shouldShowTextToneWhenEditing:(BOOL)editing;	// 0x30fcd659
- (BOOL)shouldShowTextVibrationWhenEditing:(BOOL)editing;	// 0x30fcd789
- (id)stringValueAtIndex:(int)index;	// 0x30fc0bc9
- (void)trimValueForCountryCodeAtIndex:(int)index;	// 0x30fccff1
- (void)updateRecord;	// 0x30fcb7ad
- (id)valueForKey:(id)key info:(id)info;	// 0x30fb6b01
- (id)writablePeopleAtIndex:(int)index;	// 0x30fcbf99
@end
