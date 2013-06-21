/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSArray, NSInvocation, NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRApplianceCategory : XXUnknownSuperclass {
	NSMutableDictionary *_info;	// 4 = 0x4
	NSDictionary *_storeDescription;	// 8 = 0x8
	BOOL _followsStoreCategory;	// 12 = 0xc
}
@property(retain, nonatomic) NSInvocation *action;	// G=0x295649; S=0x2955e5; 
@property(assign, nonatomic) BOOL followsStoreCategory;	// G=0x295d31; S=0x295771; @synthesize=_followsStoreCategory
@property(retain, nonatomic) id identifier;	// G=0x295595; S=0x29553d; 
@property(retain) NSMutableDictionary *info;	// G=0x295ce9; S=0x295cfd; @synthesize=_info
@property(assign, nonatomic) BOOL isDefaultCategory;	// G=0x2954d9; S=0x295465; 
@property(assign, nonatomic) BOOL isStoreCategory;	// G=0x29570d; S=0x295699; 
@property(assign, nonatomic) BOOL isStoreDependent;	// G=0x2958bd; S=0x295849; 
@property(retain, nonatomic) NSString *name;	// G=0x29533d; S=0x2952d9; 
@property(assign, nonatomic) float preferredOrder;	// G=0x295401; S=0x29538d; 
@property(assign, nonatomic) BOOL shouldDisplayOnStartup;	// G=0x295995; S=0x295921; 
@property(retain) NSDictionary *storeDescription;	// G=0x295d0d; S=0x295d21; @synthesize=_storeDescription
@property(retain, nonatomic) NSArray *textEntryHistoryDisplayBehaviors;	// G=0x295c99; S=0x295c2d; 
@property(retain, nonatomic) NSArray *textEntryHistoryDisplayClients;	// G=0x295bdd; S=0x295b71; 
@property(retain, nonatomic) NSString *textEntryHistoryStorageBehavior;	// G=0x295b21; S=0x295ab5; 
@property(retain, nonatomic) NSString *textEntryHistoryStorageClient;	// G=0x295a65; S=0x2959f9; 
+ (id)categoryWithDescription:(id)description;	// 0x295135
+ (id)categoryWithName:(id)name identifier:(id)identifier preferredOrder:(float)order;	// 0x2950ad
- (id)init;	// 0x2951a1
- (void).cxx_destruct;	// 0x295d41
// declared property getter: - (id)action;	// 0x295649
- (id)description;	// 0x295215
// declared property getter: - (BOOL)followsStoreCategory;	// 0x295d31
- (BOOL)followsStoreCateogry;	// 0x2957e5
// declared property getter: - (id)identifier;	// 0x295595
// declared property getter: - (id)info;	// 0x295ce9
// declared property getter: - (BOOL)isDefaultCategory;	// 0x2954d9
// declared property getter: - (BOOL)isStoreCategory;	// 0x29570d
// declared property getter: - (BOOL)isStoreDependent;	// 0x2958bd
// declared property getter: - (id)name;	// 0x29533d
// declared property getter: - (float)preferredOrder;	// 0x295401
// declared property setter: - (void)setAction:(id)action;	// 0x2955e5
// declared property setter: - (void)setFollowsStoreCategory:(BOOL)category;	// 0x295771
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x29553d
// declared property setter: - (void)setInfo:(id)info;	// 0x295cfd
// declared property setter: - (void)setIsDefaultCategory:(BOOL)category;	// 0x295465
// declared property setter: - (void)setIsStoreCategory:(BOOL)category;	// 0x295699
// declared property setter: - (void)setIsStoreDependent:(BOOL)dependent;	// 0x295849
// declared property setter: - (void)setName:(id)name;	// 0x2952d9
// declared property setter: - (void)setPreferredOrder:(float)order;	// 0x29538d
// declared property setter: - (void)setShouldDisplayOnStartup:(BOOL)displayOnStartup;	// 0x295921
// declared property setter: - (void)setStoreDescription:(id)description;	// 0x295d21
// declared property setter: - (void)setTextEntryHistoryDisplayBehaviors:(id)behaviors;	// 0x295c2d
// declared property setter: - (void)setTextEntryHistoryDisplayClients:(id)clients;	// 0x295b71
// declared property setter: - (void)setTextEntryHistoryStorageBehavior:(id)behavior;	// 0x295ab5
// declared property setter: - (void)setTextEntryHistoryStorageClient:(id)client;	// 0x2959f9
// declared property getter: - (BOOL)shouldDisplayOnStartup;	// 0x295995
// declared property getter: - (id)storeDescription;	// 0x295d0d
// declared property getter: - (id)textEntryHistoryDisplayBehaviors;	// 0x295c99
// declared property getter: - (id)textEntryHistoryDisplayClients;	// 0x295bdd
// declared property getter: - (id)textEntryHistoryStorageBehavior;	// 0x295b21
// declared property getter: - (id)textEntryHistoryStorageClient;	// 0x295a65
@end
