/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSArray, NSInvocation, NSString;

__attribute__((visibility("hidden")))
@interface BRApplianceCategory : XXUnknownSuperclass {
	BOOL _followsStoreCategory;	// 4 = 0x4
	NSMutableDictionary *_info;	// 8 = 0x8
	NSDictionary *_storeDescription;	// 12 = 0xc
}
@property(retain, nonatomic) NSInvocation *action;	// G=0x31d5e1; S=0x31d57d; 
@property(assign, nonatomic) BOOL followsStoreCategory;	// G=0x31dcc9; S=0x31d709; @synthesize=_followsStoreCategory
@property(retain, nonatomic) id identifier;	// G=0x31d52d; S=0x31d4d5; 
@property(retain) NSMutableDictionary *info;	// G=0x31dc81; S=0x31dc95; @synthesize=_info
@property(assign, nonatomic) BOOL isDefaultCategory;	// G=0x31d471; S=0x31d3fd; 
@property(assign, nonatomic) BOOL isStoreCategory;	// G=0x31d6a5; S=0x31d631; 
@property(assign, nonatomic) BOOL isStoreDependent;	// G=0x31d855; S=0x31d7e1; 
@property(retain, nonatomic) NSString *name;	// G=0x31d28d; S=0x31d229; 
@property(assign, nonatomic) float preferredOrder;	// G=0x31d399; S=0x31d325; 
@property(assign, nonatomic) BOOL shouldDisplayOnStartup;	// G=0x31d92d; S=0x31d8b9; 
@property(retain) NSDictionary *storeDescription;	// G=0x31dca5; S=0x31dcb9; @synthesize=_storeDescription
@property(retain, nonatomic) NSArray *textEntryHistoryDisplayBehaviors;	// G=0x31dc31; S=0x31dbc5; 
@property(retain, nonatomic) NSArray *textEntryHistoryDisplayClients;	// G=0x31db75; S=0x31db09; 
@property(retain, nonatomic) NSString *textEntryHistoryStorageBehavior;	// G=0x31dab9; S=0x31da4d; 
@property(retain, nonatomic) NSString *textEntryHistoryStorageClient;	// G=0x31d9fd; S=0x31d991; 
+ (id)categoryWithDescription:(id)description;	// 0x31d08d
+ (id)categoryWithName:(id)name identifier:(id)identifier preferredOrder:(float)order;	// 0x31d005
- (id)init;	// 0x31d0f9
- (void).cxx_destruct;	// 0x31dcd9
// declared property getter: - (id)action;	// 0x31d5e1
- (id)description;	// 0x31d165
// declared property getter: - (BOOL)followsStoreCategory;	// 0x31dcc9
- (BOOL)followsStoreCateogry;	// 0x31d77d
// declared property getter: - (id)identifier;	// 0x31d52d
// declared property getter: - (id)info;	// 0x31dc81
// declared property getter: - (BOOL)isDefaultCategory;	// 0x31d471
// declared property getter: - (BOOL)isStoreCategory;	// 0x31d6a5
// declared property getter: - (BOOL)isStoreDependent;	// 0x31d855
// declared property getter: - (id)name;	// 0x31d28d
// declared property getter: - (float)preferredOrder;	// 0x31d399
// declared property setter: - (void)setAction:(id)action;	// 0x31d57d
// declared property setter: - (void)setFollowsStoreCategory:(BOOL)category;	// 0x31d709
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x31d4d5
// declared property setter: - (void)setInfo:(id)info;	// 0x31dc95
// declared property setter: - (void)setIsDefaultCategory:(BOOL)category;	// 0x31d3fd
// declared property setter: - (void)setIsStoreCategory:(BOOL)category;	// 0x31d631
// declared property setter: - (void)setIsStoreDependent:(BOOL)dependent;	// 0x31d7e1
// declared property setter: - (void)setName:(id)name;	// 0x31d229
// declared property setter: - (void)setPreferredOrder:(float)order;	// 0x31d325
// declared property setter: - (void)setShouldDisplayOnStartup:(BOOL)displayOnStartup;	// 0x31d8b9
// declared property setter: - (void)setStoreDescription:(id)description;	// 0x31dcb9
// declared property setter: - (void)setTextEntryHistoryDisplayBehaviors:(id)behaviors;	// 0x31dbc5
// declared property setter: - (void)setTextEntryHistoryDisplayClients:(id)clients;	// 0x31db09
// declared property setter: - (void)setTextEntryHistoryStorageBehavior:(id)behavior;	// 0x31da4d
// declared property setter: - (void)setTextEntryHistoryStorageClient:(id)client;	// 0x31d991
// declared property getter: - (BOOL)shouldDisplayOnStartup;	// 0x31d92d
// declared property getter: - (id)storeDescription;	// 0x31dca5
// declared property getter: - (id)textEntryHistoryDisplayBehaviors;	// 0x31dc31
// declared property getter: - (id)textEntryHistoryDisplayClients;	// 0x31db75
// declared property getter: - (id)textEntryHistoryStorageBehavior;	// 0x31dab9
// declared property getter: - (id)textEntryHistoryStorageClient;	// 0x31d9fd
@end
