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
@property(assign) BOOL allowsVibrations;	// G=0x308f184d; S=0x3091a7f9; converted property
@property(readonly, assign) void *context;	// G=0x308fcaed; converted property
@property(readonly, assign) int property;	// G=0x308f01a5; converted property
- (id)initWithProperty:(int)property context:(void *)context;	// 0x308ef499
- (void)_addValuesToCache;	// 0x308effad
- (id)_allRecordInfosInRecordInfoDictionary:(id)recordInfoDictionary;	// 0x308f32a5
- (id)_bestValueBetween:(id)between and:(id)anAnd;	// 0x309179f1
- (BOOL)_canSaveAtIndex:(int)index;	// 0x308f2f65
- (void)_clearAllCachedInfo;	// 0x308eff15
- (void *)_copyCachedValueForPerson:(void *)person;	// 0x308f02e1
- (id)_findFuzzyMatchingValue:(id)value inDictionary:(id)dictionary;	// 0x309182a9
- (void)_getAnyIdentifier:(int *)identifier person:(const void **)person propertyValue:(id *)value propertyLabel:(id *)label fromRecordInfoDictionary:(id)recordInfoDictionary;	// 0x308f3109
- (void)_getFromCacheAnyPropertyValue:(id *)cacheAnyPropertyValue andLabel:(id *)label forRecordInfoDictionary:(id)recordInfoDictionary;	// 0x308f30e1
- (void)_getFromCachePropertyValue:(id *)cachePropertyValue andLabel:(id *)label forPerson:(void *)person identifier:(int)identifier;	// 0x308f3325
- (id)_getFromLineInfos:(id)lineInfos key:(id)key valueForKey:(id)key3;	// 0x309062d5
- (void)_getIndex:(int *)index andEditableFlag:(BOOL *)flag fromInfo:(id)info;	// 0x309003bd
- (BOOL)_hasNonNullSoundForIdentifier:(int)identifier;	// 0x30917705
- (int)_indexFromInfo:(id)info;	// 0x309028ed
- (void)_insertSingleValue:(id)value label:(id)label identifier:(int)identifier forPerson:(void *)person indicesAndLabelsForValuesSeenAlready:(id)valuesSeenAlready;	// 0x308f0339
- (BOOL)_isBirthdayDate:(id)date equivalentTo:(id)to;	// 0x309181fd
- (BOOL)_isEmptyValue:(id)value isPreinserted:(BOOL)preinserted;	// 0x308f3401
- (BOOL)_isPropertyValue:(id)value equivalentTo:(id)to;	// 0x309106e1
- (BOOL)_isSocialProfile:(id)profile equivalentTo:(id)to;	// 0x309180d9
- (id)_newLocalizedCountryNameForCountryCode:(id)countryCode;	// 0x30917acd
- (id)_newLocalizedPlaceholderForKey:(id)key;	// 0x3090396d
- (id)_peopleInCache;	// 0x30917b45
- (BOOL)_propertyIsDate;	// 0x30917aa5
- (BOOL)_recordInfoDictionary:(id)dictionary containsPerson:(void *)person;	// 0x30910769
- (id)_recordInfoDictionaryAtIndex:(int)index;	// 0x308f1445
- (id)_recordInfoDictionaryForPerson:(void *)person;	// 0x309185c5
- (id)_recordInfoDictionaryForPerson:(void *)person identifier:(int)identifier;	// 0x308f0999
- (id)_recordInfoDictionaryWithAllPeople;	// 0x309183c5
- (id)_recordInfoForPerson:(void *)person;	// 0x309185b1
- (id)_recordInfoForPerson:(void *)person identifier:(int)identifier;	// 0x308f0a69
- (void)_reloadPreinsertedStuff:(BOOL)stuff insertionStuff:(BOOL)stuff2;	// 0x308f0b39
- (BOOL)_removeValueInCacheForPerson:(void *)person;	// 0x308f1f99
- (void)_setCountryCode:(id)code atIndex:(int)index withCountryName:(BOOL)countryName;	// 0x308f1a6d
- (void)_setPropertyLabel:(id)label atIndex:(int)index markChanged:(BOOL)changed;	// 0x3091900d
- (void)_setRecordInfoDictionary:(id)dictionary atIndex:(int)index;	// 0x308f14d5
- (BOOL)_setValueInCache:(void *)cache forPerson:(void *)person;	// 0x308f0141
- (BOOL)_setValueInCache:(void *)cache forPerson:(void *)person preventLabelChange:(BOOL)change;	// 0x30917621
- (id)_sortedPeople:(id)people;	// 0x308f01b5
- (id)_stringRepresentationOfPropertyValue:(id)propertyValue;	// 0x30900431
- (BOOL)_updateCacheForPerson:(void *)person identifier:(int *)identifier value:(id)value label:(CFStringRef)label shouldSetValue:(BOOL)value5 shouldSetLabel:(BOOL)label6;	// 0x30917c69
- (BOOL)_updateCacheWithPropertyLabel:(id)propertyLabel atIndex:(int)index;	// 0x30918051
- (BOOL)_updateCacheWithPropertyValue:(id)propertyValue atIndex:(int)index;	// 0x30918095
- (BOOL)_updateCacheWithPropertyValue:(id)propertyValue propertyLabel:(id)label recordInfoDictionaryAtIndex:(unsigned)index shouldSetValue:(BOOL)value shouldSetLabel:(BOOL)label5;	// 0x30917e31
- (id)_valueForCheckingExistenceOfPropertyValue:(id)propertyValue;	// 0x308f0819
- (id)_valueFromCacheForPerson:(void *)person;	// 0x309175f9
- (id)_vibrationManager;	// 0x3091a841
- (id)accountBadgeFromInfo:(id)info whenEditing:(BOOL)editing;	// 0x3091ac6d
- (id)actionsControllerPreparedWithValueAtIndex:(int)index;	// 0x3091a9e5
- (id)actualPropertyLabelAtIndex:(int)index forPerson:(void *)person;	// 0x309191f5
- (void)addPreinsertedItem;	// 0x309198d1
- (int)alertIdentifierAtIndex:(int)index;	// 0x3091a261
- (id)allRecordInfosAtIndex:(int)index;	// 0x308f3e41
- (BOOL)allowsAdding;	// 0x30901e25
- (BOOL)allowsAddingForPerson:(void *)person;	// 0x308f11a5
// converted property getter: - (BOOL)allowsVibrations;	// 0x308f184d
- (BOOL)areLabelsEditable;	// 0x30919009
- (BOOL)canDeleteAtIndex:(int)index editableFlag:(BOOL)flag;	// 0x309047d5
- (BOOL)canSave;	// 0x308f2f15
- (BOOL)canSaveAtIndex:(int)index editableFlag:(BOOL)flag;	// 0x308f2fad
// converted property getter: - (void *)context;	// 0x308fcaed
- (id)countryCodeAtIndex:(int)index;	// 0x308f1b9d
- (void)dealloc;	// 0x3090a58d
- (id)description;	// 0x309185d9
- (id)displayTextForInfo:(id)info;	// 0x3090033d
- (BOOL)editableFlagFromInfo:(id)info;	// 0x30902249
- (void)getAnyIdentifier:(int *)identifier andPerson:(const void **)person atIndex:(int)index;	// 0x309133c1
- (void)getIndex:(int *)index andEditableFlag:(BOOL *)flag forRow:(int)row whenEditing:(BOOL)editing;	// 0x308fea59
- (BOOL)hasCallVibration;	// 0x3091a4e1
- (BOOL)hasMultipleAlertsAtIndex:(int)index;	// 0x3091a38d
- (BOOL)hasRingtone;	// 0x3091a4a9
- (BOOL)hasTextTone;	// 0x3091a4c5
- (BOOL)hasTextVibration;	// 0x3091a4fd
- (int)indexOfCallVibrationInAlertEquivalentMultiValue;	// 0x308f180d
- (int)indexOfIdentifier:(int)identifier person:(void *)person;	// 0x3091aa75
- (int)indexOfRingtoneInAlertEquivalentMultiValue;	// 0x308f17f1
- (int)indexOfTextToneInAlertEquivalentMultiValue;	// 0x308f185d
- (int)indexOfTextVibrationInAlertEquivalentMultiValue;	// 0x308f189d
- (int)insertionIndex;	// 0x308f15d1
- (BOOL)instantMessageServiceIsSupported;	// 0x308f2269
- (BOOL)instantMessageServiceIsSupportedForPerson:(void *)person;	// 0x308f2341
- (int)itemCount;	// 0x308f1425
- (id)keyboardSettingsForKey:(id)key info:(id)info;	// 0x309036bd
- (id)labelTextForInfo:(id)info;	// 0x309026a9
- (id)lineInfosAtIndex:(int)index;	// 0x30905099
- (id)lineInfosForInfo:(id)info;	// 0x30905069
- (id)localizedPropertyLabelAtIndex:(int)index;	// 0x30902915
- (BOOL)multiCellContentView:(id)view alwaysShowsClearButtonAtIndexPath:(id)indexPath;	// 0x3091b08d
- (id)peopleFromInfo:(id)info whenEditing:(BOOL)editing;	// 0x3091adb9
- (id)placeholderTextForKey:(id)key info:(id)info;	// 0x30903885
- (void *)policyForPerson:(void *)person;	// 0x308f13f1
- (void)prepareActionsController:(id)controller withValueAtIndex:(int)index;	// 0x30913719
// converted property getter: - (int)property;	// 0x308f01a5
- (id)propertyLabelAtIndex:(int)index;	// 0x30902b15
- (id)propertyLabelAtIndex:(int)index forceUseReadonly:(BOOL)readonly;	// 0x30902b29
- (id)propertyValueAtIndex:(int)index;	// 0x308f1c79
- (id)propertyValueAtIndex:(int)index forceUseReadonly:(BOOL)readonly;	// 0x308f1c8d
- (id)propertyValueForInfo:(id)info;	// 0x3090036d
- (void)refreshVibrations;	// 0x3091a895
- (void)reloadFromModel;	// 0x308ef7d5
- (BOOL)removeItemAtRow:(int)row;	// 0x309199c9
- (BOOL)removeItemAtRow:(int)row whenEditing:(BOOL)editing;	// 0x309199e1
- (int)rowCountWhenEditing:(BOOL)editing;	// 0x308fe709
- (int)rowForIndex:(int)index editableFlag:(BOOL)flag whenEditing:(BOOL)editing;	// 0x309189c1
- (id)rowsToDeleteInTransition:(BOOL)transition;	// 0x30918c1d
- (id)rowsToInsertInTransition:(BOOL)transition;	// 0x30918c3d
- (id)serviceAtIndex:(int)index;	// 0x308f2149
// converted property setter: - (void)setAllowsVibrations:(BOOL)vibrations;	// 0x3091a7f9
- (void)setCapabilitiesManager:(id)manager;	// 0x3091a8b5
- (void)setCountryCode:(id)code atIndex:(int)index;	// 0x30919f15
- (void)setDefaultPolicy:(void *)policy;	// 0x308f16b5
- (BOOL)setEmptyValueAtIndex:(int)index editableFlag:(BOOL)flag whenEditing:(BOOL)editing;	// 0x309193c1
- (BOOL)setEmptyValueAtRow:(int)row whenEditing:(BOOL)editing;	// 0x309194bd
- (void)setPropertyLabel:(id)label atIndex:(int)index;	// 0x309191d1
- (void)setPropertyValue:(id)value atIndex:(int)index;	// 0x308f1de5
- (void)setService:(id)service atIndex:(int)index;	// 0x308f1fb5
- (void)setValue:(id)value forKey:(id)key forIndex:(int)index;	// 0x3091950d
- (id)shortServiceForService:(id)service;	// 0x30911275
- (BOOL)shouldDisambiguateNotes;	// 0x3091a8f9
- (BOOL)shouldShowAlertsWhenEditing:(BOOL)editing;	// 0x3091a779
- (BOOL)shouldShowCallVibrationWhenEditing:(BOOL)editing;	// 0x3091a645
- (BOOL)shouldShowRingtoneWhenEditing:(BOOL)editing;	// 0x3091a519
- (BOOL)shouldShowTextToneWhenEditing:(BOOL)editing;	// 0x3091a5a1
- (BOOL)shouldShowTextVibrationWhenEditing:(BOOL)editing;	// 0x3091a6d1
- (id)stringValueAtIndex:(int)index;	// 0x3090daf9
- (void)trimValueForCountryCodeAtIndex:(int)index;	// 0x30919f39
- (void)updateRecord;	// 0x309186f5
- (id)valueForKey:(id)key info:(id)info;	// 0x30903a51
- (id)writablePeopleAtIndex:(int)index;	// 0x30918ee1
@end
