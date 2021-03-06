/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NSString, NetflixNrdObjectCallback, NSDictionary, NSArray;

@interface NetflixRegistration : NetflixNrdObject <NetflixNrdObjectProtocol> {
	NetflixNrdObjectCallback *createDeviceAccountCallback_;	// 4 = 0x4
	NetflixNrdObjectCallback *selectDeviceAccountCallback_;	// 8 = 0x8
	NetflixNrdObjectCallback *unselectDeviceAccountCallback_;	// 12 = 0xc
	NetflixNrdObjectCallback *deactivateCallback_;	// 16 = 0x10
	NetflixNrdObjectCallback *deactivateAllCallback_;	// 20 = 0x14
}
@property(copy) NSDictionary *activationTokens;	// G=0x45d199; S=0x45d3e1; 
@property(retain) NetflixNrdObjectCallback *createDeviceAccountCallback;	// G=0x45e951; S=0x45e965; @synthesize=createDeviceAccountCallback_
@property(readonly, assign) NSString *currentDeviceAccount;	// G=0x45d0b9; 
@property(retain) NetflixNrdObjectCallback *deactivateAllCallback;	// G=0x45ea31; S=0x45ea45; @synthesize=deactivateAllCallback_
@property(retain) NetflixNrdObjectCallback *deactivateCallback;	// G=0x45e9f9; S=0x45ea0d; @synthesize=deactivateCallback_
@property(readonly, assign) NSArray *deviceAccounts;	// G=0x45d041; 
@property(readonly, assign) BOOL registered;	// G=0x45d131; 
@property(retain) NetflixNrdObjectCallback *selectDeviceAccountCallback;	// G=0x45e989; S=0x45e99d; @synthesize=selectDeviceAccountCallback_
@property(retain) NetflixNrdObjectCallback *unselectDeviceAccountCallback;	// G=0x45e9c1; S=0x45e9d5; @synthesize=unselectDeviceAccountCallback_
+ (id)sharedInstance;	// 0x45ce99
- (void)activate:(id)activate params:(id)params;	// 0x45dad5
// declared property getter: - (id)activationTokens;	// 0x45d199
- (void)addEventListener:(id)listener name:(id)name;	// 0x45e8c1
- (void)cancelRendezvous;	// 0x45d711
- (void)createDeviceAccount:(id)account;	// 0x45d745
// declared property getter: - (id)createDeviceAccountCallback;	// 0x45e951
// declared property getter: - (id)currentDeviceAccount;	// 0x45d0b9
- (void)deactivate:(id)deactivate callback:(id)callback;	// 0x45d995
- (void)deactivateAll:(id)all;	// 0x45da5d
// declared property getter: - (id)deactivateAllCallback;	// 0x45ea31
// declared property getter: - (id)deactivateCallback;	// 0x45e9f9
- (void)dealloc;	// 0x45cf79
// declared property getter: - (id)deviceAccounts;	// 0x45d041
- (void)emailActivate:(id)activate password:(id)password;	// 0x45d8d5
- (void)getDeviceTokens;	// 0x45d885
- (BOOL)handleEvent:(id)event;	// 0x45dc39
- (void)massDeactivationCheck;	// 0x45d961
// declared property getter: - (BOOL)registered;	// 0x45d131
- (void)removeEventListener:(id)listener name:(id)name;	// 0x45e909
- (void)selectDeviceAccount:(id)account callback:(id)callback;	// 0x45d78d
// declared property getter: - (id)selectDeviceAccountCallback;	// 0x45e989
// declared property setter: - (void)setActivationTokens:(id)tokens;	// 0x45d3e1
// declared property setter: - (void)setCreateDeviceAccountCallback:(id)callback;	// 0x45e965
// declared property setter: - (void)setDeactivateAllCallback:(id)callback;	// 0x45ea45
// declared property setter: - (void)setDeactivateCallback:(id)callback;	// 0x45ea0d
// declared property setter: - (void)setSelectDeviceAccountCallback:(id)callback;	// 0x45e99d
// declared property setter: - (void)setUnselectDeviceAccountCallback:(id)callback;	// 0x45e9d5
- (void)startRendezvous;	// 0x45d6ad
- (void)tokenActivate:(id)activate;	// 0x45d8b9
- (void)unselectDeviceAccount:(id)account;	// 0x45d83d
// declared property getter: - (id)unselectDeviceAccountCallback;	// 0x45e9c1
- (BOOL)validateDak:(id)dak;	// 0x45db59
@end

