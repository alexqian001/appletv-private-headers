/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <NSURL.h> // Unknown library

@class NSString;

@interface NSURL (QueryParameters)
- (id)URLByDeletingQueryParameterWithKey:(id)key;	// 0x33585f39
- (id)URLBySettingQueryParameterValue:(id)value forKey:(id)key;	// 0x33585ec5
- (id)URLWithNewQueryParameterDictionary:(id)newQueryParameterDictionary;	// 0x33585df9
- (id)queryParameters;	// 0x33585c01
@end

@interface NSURL (FaceTime)
+ (id)_applyFaceTimeScheme:(id)scheme toFaceTimeURL:(id)faceTimeURL;	// 0x335863f9
+ (id)_faceTimeURLWithDestinationID:(id)destinationID addressBookUID:(int)uid;	// 0x335862a9
+ (id)faceTimeAcceptURLWithURL:(id)url;	// 0x33586535
+ (id)faceTimeAcceptURLWithURL:(id)url conferenceID:(id)anId;	// 0x33586549
+ (id)faceTimePromptURLWithURL:(id)url;	// 0x33586509
+ (id)faceTimeURLWithDestinationID:(id)destinationID;	// 0x335863bd
+ (id)faceTimeURLWithDestinationID:(id)destinationID addressBookUID:(int)uid;	// 0x335863dd
+ (id)faceTimeURLWithURL:(id)url;	// 0x335864dd
- (BOOL)_isPhoneNumberID:(id)anId;	// 0x3358624d
- (id)faceTimeDestinationAccount;	// 0x33586165
- (BOOL)isFaceTimeAcceptURL;	// 0x335866c9
- (BOOL)isFaceTimePromptURL;	// 0x33586695
- (BOOL)isFaceTimeURL;	// 0x335865b5
- (BOOL)isValidFaceTimeURL;	// 0x33586615
@end

@interface NSURL (FaceTime_PhoneNumber)
+ (id)faceTimeURLWithPhoneNumber:(id)phoneNumber addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist4 wasAssisted:(BOOL)assisted;	// 0x335866fd
@end

@interface NSURL (Telephony)
@property(readonly, assign) int addressBookUID;	// G=0x3358b8cd; 
@property(readonly, assign) BOOL forceAssist;	// G=0x3358b959; 
@property(readonly, assign) NSString *phoneNumber;	// G=0x3358b7b1; 
@property(readonly, assign) BOOL suppressAssist;	// G=0x3358b9e5; 
@property(readonly, assign) BOOL wasAlreadyAssisted;	// G=0x3358ba59; 
+ (id)URLWithTelephoneNumber:(id)telephoneNumber;	// 0x3358b4b5
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid;	// 0x3358b541
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist4 wasAssisted:(BOOL)assisted;	// 0x3358b5c1
+ (id)URLWithTelephoneNumber:(id)telephoneNumber promptUser:(BOOL)user;	// 0x3358b4c9
- (id)_mobilePhonePathParameters;	// 0x3358bfcd
- (id)_mobilePhoneQueryParameters;	// 0x3358c171
// declared property getter: - (int)addressBookUID;	// 0x3358b8cd
// declared property getter: - (BOOL)forceAssist;	// 0x3358b959
- (id)formattedPhoneNumber;	// 0x3358bb45
- (BOOL)hasTelephonyScheme;	// 0x3358bacd
- (BOOL)isWebSafeTelephoneURL;	// 0x3358bc45
- (id)numberQualifiedForAddressBook;	// 0x3358bbdd
// declared property getter: - (id)phoneNumber;	// 0x3358b7b1
// declared property getter: - (BOOL)suppressAssist;	// 0x3358b9e5
- (id)telephonyParameterDictionary;	// 0x3358bf41
// declared property getter: - (BOOL)wasAlreadyAssisted;	// 0x3358ba59
- (id)webSafeTelephoneURL;	// 0x3358bd35
@end
