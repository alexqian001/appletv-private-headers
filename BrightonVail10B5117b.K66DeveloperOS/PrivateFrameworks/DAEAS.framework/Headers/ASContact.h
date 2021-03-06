/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DADataElement.h"
#import "ASChangedCollectionLeaf.h"

@class NSArray, NSString, NSDate;

@interface ASContact : ASChangedCollectionLeaf <DADataElement> {
	void *_abRecord;	// 64 = 0x40
	NSDate *_anniversary;	// 68 = 0x44
	NSString *_assistantName;	// 72 = 0x48
	NSString *_assistantTelephoneNumber;	// 76 = 0x4c
	NSDate *_birthday;	// 80 = 0x50
	NSString *_body;	// 84 = 0x54
	int _bodySize;	// 88 = 0x58
	BOOL _bodyTruncated;	// 92 = 0x5c
	NSString *_business2TelephoneNumber;	// 96 = 0x60
	NSString *_businessAddressCity;	// 100 = 0x64
	NSString *_businessAddressCountry;	// 104 = 0x68
	NSString *_businessAddressPostalCode;	// 108 = 0x6c
	NSString *_businessAddressState;	// 112 = 0x70
	NSString *_businessAddressStreet;	// 116 = 0x74
	NSString *_businessFaxNumber;	// 120 = 0x78
	NSString *_businessTelephoneNumber;	// 124 = 0x7c
	NSString *_carTelephoneNumber;	// 128 = 0x80
	NSArray *_categories;	// 132 = 0x84
	NSArray *_children;	// 136 = 0x88
	NSString *_companyName;	// 140 = 0x8c
	NSString *_department;	// 144 = 0x90
	NSString *_email1Address;	// 148 = 0x94
	NSString *_email2Address;	// 152 = 0x98
	NSString *_email3Address;	// 156 = 0x9c
	NSString *_fileAs;	// 160 = 0xa0
	NSString *_firstName;	// 164 = 0xa4
	NSString *_home2TelephoneNumber;	// 168 = 0xa8
	NSString *_homeAddressCity;	// 172 = 0xac
	NSString *_homeAddressCountry;	// 176 = 0xb0
	NSString *_homeAddressPostalCode;	// 180 = 0xb4
	NSString *_homeAddressState;	// 184 = 0xb8
	NSString *_homeAddressStreet;	// 188 = 0xbc
	NSString *_homeFaxNumber;	// 192 = 0xc0
	NSString *_homeTelephoneNumber;	// 196 = 0xc4
	NSString *_jobTitle;	// 200 = 0xc8
	NSString *_lastName;	// 204 = 0xcc
	NSString *_middleName;	// 208 = 0xd0
	NSString *_mobileTelephoneNumber;	// 212 = 0xd4
	NSString *_officeLocation;	// 216 = 0xd8
	NSString *_otherAddressCity;	// 220 = 0xdc
	NSString *_otherAddressCountry;	// 224 = 0xe0
	NSString *_otherAddressPostalCode;	// 228 = 0xe4
	NSString *_otherAddressState;	// 232 = 0xe8
	NSString *_otherAddressStreet;	// 236 = 0xec
	NSString *_pagerNumber;	// 240 = 0xf0
	NSString *_picture;	// 244 = 0xf4
	NSString *_radioTelephoneNumber;	// 248 = 0xf8
	NSString *_spouse;	// 252 = 0xfc
	NSString *_suffix;	// 256 = 0x100
	NSString *_title;	// 260 = 0x104
	NSString *_webpage;	// 264 = 0x108
	NSString *_yomiCompanyName;	// 268 = 0x10c
	NSString *_yomiFirstName;	// 272 = 0x110
	NSString *_yomiLastName;	// 276 = 0x114
	NSString *_customerID;	// 280 = 0x118
	NSString *_governmentID;	// 284 = 0x11c
	NSString *_im1Address;	// 288 = 0x120
	NSString *_im2Address;	// 292 = 0x124
	NSString *_im3Address;	// 296 = 0x128
	NSString *_managerName;	// 300 = 0x12c
	NSString *_companyMainPhone;	// 304 = 0x130
	NSString *_accountName;	// 308 = 0x134
	NSString *_nickName;	// 312 = 0x138
	NSString *_mms;	// 316 = 0x13c
	int _fileAsAutoConstruction;	// 320 = 0x140
}
@property(retain) NSString *accountName;	// G=0x33be72cd; S=0x33be72e1; @synthesize=_accountName
@property(retain) NSDate *anniversary;	// G=0x33be6a5d; S=0x33be6a71; @synthesize=_anniversary
@property(retain) NSString *assistantName;	// G=0x33be6a81; S=0x33be6a95; @synthesize=_assistantName
@property(retain) NSString *assistantTelephoneNumber;	// G=0x33be6aa5; S=0x33be6ab9; @synthesize=_assistantTelephoneNumber
@property(retain) NSDate *birthday;	// G=0x33be6ac9; S=0x33be6add; @synthesize=_birthday
@property(retain, nonatomic) NSString *body;	// G=0x33be6aed; S=0x33be6839; @synthesize=_body
@property(assign) int bodySize;	// G=0x33be6afd; S=0x33be6b11; @synthesize=_bodySize
@property(assign) BOOL bodyTruncated;	// G=0x33be6b29; S=0x33be6b41; @synthesize=_bodyTruncated
@property(retain) NSString *business2TelephoneNumber;	// G=0x33be6b59; S=0x33be6b6d; @synthesize=_business2TelephoneNumber
@property(retain) NSString *businessAddressCity;	// G=0x33be6b7d; S=0x33be6b91; @synthesize=_businessAddressCity
@property(retain) NSString *businessAddressCountry;	// G=0x33be6ba1; S=0x33be6bb5; @synthesize=_businessAddressCountry
@property(retain) NSString *businessAddressPostalCode;	// G=0x33be6bc5; S=0x33be6bd9; @synthesize=_businessAddressPostalCode
@property(retain) NSString *businessAddressState;	// G=0x33be6be9; S=0x33be6bfd; @synthesize=_businessAddressState
@property(retain) NSString *businessAddressStreet;	// G=0x33be6c0d; S=0x33be6c21; @synthesize=_businessAddressStreet
@property(retain) NSString *businessFaxNumber;	// G=0x33be6c31; S=0x33be6c45; @synthesize=_businessFaxNumber
@property(retain) NSString *businessTelephoneNumber;	// G=0x33be6c55; S=0x33be6c69; @synthesize=_businessTelephoneNumber
@property(retain) NSString *carTelephoneNumber;	// G=0x33be6cc1; S=0x33be6cd5; @synthesize=_carTelephoneNumber
@property(retain) NSArray *categories;	// G=0x33be6c79; S=0x33be6c8d; @synthesize=_categories
@property(retain) NSArray *children;	// G=0x33be6c9d; S=0x33be6cb1; @synthesize=_children
@property(retain) NSString *companyMainPhone;	// G=0x33be72a9; S=0x33be72bd; @synthesize=_companyMainPhone
@property(retain) NSString *companyName;	// G=0x33be6ce5; S=0x33be6cf9; @synthesize=_companyName
@property(retain) NSString *customerID;	// G=0x33be71d1; S=0x33be71e5; @synthesize=_customerID
@property(retain) NSString *department;	// G=0x33be6d09; S=0x33be6d1d; @synthesize=_department
@property(retain) NSString *email1Address;	// G=0x33be6d2d; S=0x33be6d41; @synthesize=_email1Address
@property(retain) NSString *email2Address;	// G=0x33be6d51; S=0x33be6d65; @synthesize=_email2Address
@property(retain) NSString *email3Address;	// G=0x33be6d75; S=0x33be6d89; @synthesize=_email3Address
@property(retain) NSString *fileAs;	// G=0x33be6d99; S=0x33be6dad; @synthesize=_fileAs
@property(retain) NSString *firstName;	// G=0x33be6dbd; S=0x33be6dd1; @synthesize=_firstName
@property(retain) NSString *governmentID;	// G=0x33be71f5; S=0x33be7209; @synthesize=_governmentID
@property(retain) NSString *home2TelephoneNumber;	// G=0x33be6de1; S=0x33be6df5; @synthesize=_home2TelephoneNumber
@property(retain) NSString *homeAddressCity;	// G=0x33be6e05; S=0x33be6e19; @synthesize=_homeAddressCity
@property(retain) NSString *homeAddressCountry;	// G=0x33be6e29; S=0x33be6e3d; @synthesize=_homeAddressCountry
@property(retain) NSString *homeAddressPostalCode;	// G=0x33be6e4d; S=0x33be6e61; @synthesize=_homeAddressPostalCode
@property(retain) NSString *homeAddressState;	// G=0x33be6e71; S=0x33be6e85; @synthesize=_homeAddressState
@property(retain) NSString *homeAddressStreet;	// G=0x33be6e95; S=0x33be6ea9; @synthesize=_homeAddressStreet
@property(retain) NSString *homeFaxNumber;	// G=0x33be6edd; S=0x33be6ef1; @synthesize=_homeFaxNumber
@property(retain) NSString *homeTelephoneNumber;	// G=0x33be6eb9; S=0x33be6ecd; @synthesize=_homeTelephoneNumber
@property(retain) NSString *im1Address;	// G=0x33be7219; S=0x33be722d; @synthesize=_im1Address
@property(retain) NSString *im2Address;	// G=0x33be723d; S=0x33be7251; @synthesize=_im2Address
@property(retain) NSString *im3Address;	// G=0x33be7261; S=0x33be7275; @synthesize=_im3Address
@property(retain) NSString *jobTitle;	// G=0x33be6f01; S=0x33be6f15; @synthesize=_jobTitle
@property(retain) NSString *lastName;	// G=0x33be6f25; S=0x33be6f39; @synthesize=_lastName
@property(retain) NSString *managerName;	// G=0x33be7285; S=0x33be7299; @synthesize=_managerName
@property(retain) NSString *middleName;	// G=0x33be6f49; S=0x33be6f5d; @synthesize=_middleName
@property(retain) NSString *mms;	// G=0x33be7315; S=0x33be7329; @synthesize=_mms
@property(retain) NSString *mobileTelephoneNumber;	// G=0x33be6f6d; S=0x33be6f81; @synthesize=_mobileTelephoneNumber
@property(retain) NSString *nickName;	// G=0x33be72f1; S=0x33be7305; @synthesize=_nickName
@property(retain) NSString *officeLocation;	// G=0x33be6f91; S=0x33be6fa5; @synthesize=_officeLocation
@property(retain) NSString *otherAddressCity;	// G=0x33be6fb5; S=0x33be6fc9; @synthesize=_otherAddressCity
@property(retain) NSString *otherAddressCountry;	// G=0x33be6fd9; S=0x33be6fed; @synthesize=_otherAddressCountry
@property(retain) NSString *otherAddressPostalCode;	// G=0x33be6ffd; S=0x33be7011; @synthesize=_otherAddressPostalCode
@property(retain) NSString *otherAddressState;	// G=0x33be7021; S=0x33be7035; @synthesize=_otherAddressState
@property(retain) NSString *otherAddressStreet;	// G=0x33be7045; S=0x33be7059; @synthesize=_otherAddressStreet
@property(retain) NSString *pagerNumber;	// G=0x33be7069; S=0x33be707d; @synthesize=_pagerNumber
@property(retain) NSString *picture;	// G=0x33be708d; S=0x33be70a1; @synthesize=_picture
@property(retain) NSString *radioTelephoneNumber;	// G=0x33be70b1; S=0x33be70c5; @synthesize=_radioTelephoneNumber
@property(retain) NSString *spouse;	// G=0x33be70d5; S=0x33be70e9; @synthesize=_spouse
@property(retain) NSString *suffix;	// G=0x33be70f9; S=0x33be710d; @synthesize=_suffix
@property(retain) NSString *title;	// G=0x33be711d; S=0x33be7131; @synthesize=_title
@property(retain) NSString *webpage;	// G=0x33be7141; S=0x33be7155; @synthesize=_webpage
@property(retain) NSString *yomiCompanyName;	// G=0x33be7165; S=0x33be7179; @synthesize=_yomiCompanyName
@property(retain) NSString *yomiFirstName;	// G=0x33be7189; S=0x33be719d; @synthesize=_yomiFirstName
@property(retain) NSString *yomiLastName;	// G=0x33be71ad; S=0x33be71c1; @synthesize=_yomiLastName
+ (void)_setSystemTimeZoneForUnitTests:(id)unitTests;	// 0x33bde0d5
+ (BOOL)acceptsTopLevelLeaves;	// 0x33bddf31
+ (id)asParseRules;	// 0x33bde1e1
+ (id)contactWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x33be09fd
+ (BOOL)frontingBasicTypes;	// 0x33bde02d
+ (BOOL)notifyOfUnknownTokens;	// 0x33bde081
+ (BOOL)parsingLeafNode;	// 0x33bddf85
+ (BOOL)parsingWithSubItems;	// 0x33bddfd9
- (id)initWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x33be0989
- (id)initWithCoder:(id)coder;	// 0x33be68a5
- (void)_detectFileAsAutoConstruction;	// 0x33bdf745
- (void)_loadAttributesFromABRecord:(void *)abrecord;	// 0x33be0489
- (void)_reconstructFileAsField;	// 0x33bdff99
- (BOOL)_saveDatesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x33be0a3d
- (BOOL)_saveEmailsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x33be1c31
- (BOOL)_saveExternalRepToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties storeExternalRep:(BOOL)rep;	// 0x33be2529
- (BOOL)_saveIMsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x33be20f5
- (BOOL)_savePhoneNumbersToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x33be0dfd
- (BOOL)_saveRelatedNamesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x33be0bc5
- (BOOL)_saveStreetAddressesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x33be1665
- (BOOL)_saveURLsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x33be1f89
- (BOOL)_setDatesWithExistingRecord:(void *)existingRecord;	// 0x33bde721
- (BOOL)_setEmailsWithExistingRecord:(void *)existingRecord;	// 0x33bdf09d
- (BOOL)_setExternalRepWithExistingRecord:(void *)existingRecord;	// 0x33bdf321
- (BOOL)_setIMsWithExistingRecord:(void *)existingRecord;	// 0x33bdf22d
- (void)_setImageOnContactFromPerson:(void *)person;	// 0x33bde669
- (BOOL)_setPhoneNumbersWithExistingRecord:(void *)existingRecord;	// 0x33bde941
- (BOOL)_setRelatedNamesWithExistingRecord:(void *)existingRecord;	// 0x33bde809
- (BOOL)_setStreetAddressesWithExistingRecord:(void *)existingRecord;	// 0x33bded15
- (BOOL)_setURLsWithExistingRecord:(void *)existingRecord;	// 0x33bdf15d
- (id)_transformedDateForABFramework:(id)abframework;	// 0x33bde10d
- (id)_transformedDateForActiveSync:(id)activeSync;	// 0x33bde149
// declared property getter: - (id)accountName;	// 0x33be72cd
// declared property getter: - (id)anniversary;	// 0x33be6a5d
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x33be3545
// declared property getter: - (id)assistantName;	// 0x33be6a81
// declared property getter: - (id)assistantTelephoneNumber;	// 0x33be6aa5
// declared property getter: - (id)birthday;	// 0x33be6ac9
// declared property getter: - (id)body;	// 0x33be6aed
// declared property getter: - (int)bodySize;	// 0x33be6afd
// declared property getter: - (BOOL)bodyTruncated;	// 0x33be6b29
// declared property getter: - (id)business2TelephoneNumber;	// 0x33be6b59
// declared property getter: - (id)businessAddressCity;	// 0x33be6b7d
// declared property getter: - (id)businessAddressCountry;	// 0x33be6ba1
// declared property getter: - (id)businessAddressPostalCode;	// 0x33be6bc5
// declared property getter: - (id)businessAddressState;	// 0x33be6be9
// declared property getter: - (id)businessAddressStreet;	// 0x33be6c0d
// declared property getter: - (id)businessFaxNumber;	// 0x33be6c31
// declared property getter: - (id)businessTelephoneNumber;	// 0x33be6c55
// declared property getter: - (id)carTelephoneNumber;	// 0x33be6cc1
// declared property getter: - (id)categories;	// 0x33be6c79
// declared property getter: - (id)children;	// 0x33be6c9d
// declared property getter: - (id)companyMainPhone;	// 0x33be72a9
// declared property getter: - (id)companyName;	// 0x33be6ce5
// declared property getter: - (id)customerID;	// 0x33be71d1
- (int)dataclass;	// 0x33bde665
- (void)dealloc;	// 0x33be6091
- (BOOL)deleteFromAddressBook;	// 0x33be3479
- (BOOL)deleteFromContainer:(void *)container;	// 0x33be6a45
// declared property getter: - (id)department;	// 0x33be6d09
- (id)description;	// 0x33be66a1
// declared property getter: - (id)email1Address;	// 0x33be6d2d
// declared property getter: - (id)email2Address;	// 0x33be6d51
// declared property getter: - (id)email3Address;	// 0x33be6d75
- (void)encodeWithCoder:(id)coder;	// 0x33be6925
// declared property getter: - (id)fileAs;	// 0x33be6d99
// declared property getter: - (id)firstName;	// 0x33be6dbd
// declared property getter: - (id)governmentID;	// 0x33be71f5
// declared property getter: - (id)home2TelephoneNumber;	// 0x33be6de1
// declared property getter: - (id)homeAddressCity;	// 0x33be6e05
// declared property getter: - (id)homeAddressCountry;	// 0x33be6e29
// declared property getter: - (id)homeAddressPostalCode;	// 0x33be6e4d
// declared property getter: - (id)homeAddressState;	// 0x33be6e71
// declared property getter: - (id)homeAddressStreet;	// 0x33be6e95
// declared property getter: - (id)homeFaxNumber;	// 0x33be6edd
// declared property getter: - (id)homeTelephoneNumber;	// 0x33be6eb9
// declared property getter: - (id)im1Address;	// 0x33be7219
// declared property getter: - (id)im2Address;	// 0x33be723d
// declared property getter: - (id)im3Address;	// 0x33be7261
// declared property getter: - (id)jobTitle;	// 0x33be6f01
// declared property getter: - (id)lastName;	// 0x33be6f25
- (BOOL)loadABRecord;	// 0x33be323d
- (void)loadClientIDs;	// 0x33be3419
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x33be6a15
// declared property getter: - (id)managerName;	// 0x33be7285
// declared property getter: - (id)middleName;	// 0x33be6f49
// declared property getter: - (id)mms;	// 0x33be7315
// declared property getter: - (id)mobileTelephoneNumber;	// 0x33be6f6d
// declared property getter: - (id)nickName;	// 0x33be72f1
// declared property getter: - (id)officeLocation;	// 0x33be6f91
// declared property getter: - (id)otherAddressCity;	// 0x33be6fb5
// declared property getter: - (id)otherAddressCountry;	// 0x33be6fd9
// declared property getter: - (id)otherAddressPostalCode;	// 0x33be6ffd
// declared property getter: - (id)otherAddressState;	// 0x33be7021
// declared property getter: - (id)otherAddressStreet;	// 0x33be7045
// declared property getter: - (id)pagerNumber;	// 0x33be7069
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x33be65a9
// declared property getter: - (id)picture;	// 0x33be708d
- (void)postProcessApplicationData;	// 0x33be45e1
// declared property getter: - (id)radioTelephoneNumber;	// 0x33be70b1
- (BOOL)saveServerIDToContact;	// 0x33be33d5
- (BOOL)saveServerIDToExistingItem;	// 0x33be6a2d
- (BOOL)saveToAddressBookWithExistingRecord:(void *)existingRecord inSource:(void *)source shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge storeExternalRep:(BOOL)rep;	// 0x33be2a29
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x33be69a1
- (void)setABRecord:(void *)record;	// 0x33be31f1
// declared property setter: - (void)setAccountName:(id)name;	// 0x33be72e1
// declared property setter: - (void)setAnniversary:(id)anniversary;	// 0x33be6a71
// declared property setter: - (void)setAssistantName:(id)name;	// 0x33be6a95
// declared property setter: - (void)setAssistantTelephoneNumber:(id)number;	// 0x33be6ab9
// declared property setter: - (void)setBirthday:(id)birthday;	// 0x33be6add
// declared property setter: - (void)setBody:(id)body;	// 0x33be6839
// declared property setter: - (void)setBodySize:(int)size;	// 0x33be6b11
- (void)setBodySizeNumber:(id)number;	// 0x33be6641
// declared property setter: - (void)setBodyTruncated:(BOOL)truncated;	// 0x33be6b41
- (void)setBodyTruncatedNumber:(id)number;	// 0x33be6671
// declared property setter: - (void)setBusiness2TelephoneNumber:(id)number;	// 0x33be6b6d
// declared property setter: - (void)setBusinessAddressCity:(id)city;	// 0x33be6b91
// declared property setter: - (void)setBusinessAddressCountry:(id)country;	// 0x33be6bb5
// declared property setter: - (void)setBusinessAddressPostalCode:(id)code;	// 0x33be6bd9
// declared property setter: - (void)setBusinessAddressState:(id)state;	// 0x33be6bfd
// declared property setter: - (void)setBusinessAddressStreet:(id)street;	// 0x33be6c21
// declared property setter: - (void)setBusinessFaxNumber:(id)number;	// 0x33be6c45
// declared property setter: - (void)setBusinessTelephoneNumber:(id)number;	// 0x33be6c69
// declared property setter: - (void)setCarTelephoneNumber:(id)number;	// 0x33be6cd5
// declared property setter: - (void)setCategories:(id)categories;	// 0x33be6c8d
// declared property setter: - (void)setChildren:(id)children;	// 0x33be6cb1
// declared property setter: - (void)setCompanyMainPhone:(id)phone;	// 0x33be72bd
// declared property setter: - (void)setCompanyName:(id)name;	// 0x33be6cf9
// declared property setter: - (void)setCustomerID:(id)anId;	// 0x33be71e5
// declared property setter: - (void)setDepartment:(id)department;	// 0x33be6d1d
// declared property setter: - (void)setEmail1Address:(id)address;	// 0x33be6d41
// declared property setter: - (void)setEmail2Address:(id)address;	// 0x33be6d65
// declared property setter: - (void)setEmail3Address:(id)address;	// 0x33be6d89
- (void)setEmailFromAppData:(int)appData setter:(SEL)setter;	// 0x33be4559
// declared property setter: - (void)setFileAs:(id)as;	// 0x33be6dad
// declared property setter: - (void)setFirstName:(id)name;	// 0x33be6dd1
// declared property setter: - (void)setGovernmentID:(id)anId;	// 0x33be7209
// declared property setter: - (void)setHome2TelephoneNumber:(id)number;	// 0x33be6df5
// declared property setter: - (void)setHomeAddressCity:(id)city;	// 0x33be6e19
// declared property setter: - (void)setHomeAddressCountry:(id)country;	// 0x33be6e3d
// declared property setter: - (void)setHomeAddressPostalCode:(id)code;	// 0x33be6e61
// declared property setter: - (void)setHomeAddressState:(id)state;	// 0x33be6e85
// declared property setter: - (void)setHomeAddressStreet:(id)street;	// 0x33be6ea9
// declared property setter: - (void)setHomeFaxNumber:(id)number;	// 0x33be6ef1
// declared property setter: - (void)setHomeTelephoneNumber:(id)number;	// 0x33be6ecd
// declared property setter: - (void)setIm1Address:(id)address;	// 0x33be722d
// declared property setter: - (void)setIm2Address:(id)address;	// 0x33be7251
// declared property setter: - (void)setIm3Address:(id)address;	// 0x33be7275
// declared property setter: - (void)setJobTitle:(id)title;	// 0x33be6f15
// declared property setter: - (void)setLastName:(id)name;	// 0x33be6f39
- (void)setLocalItem:(void *)item;	// 0x33be6a05
// declared property setter: - (void)setManagerName:(id)name;	// 0x33be7299
// declared property setter: - (void)setMiddleName:(id)name;	// 0x33be6f5d
// declared property setter: - (void)setMms:(id)mms;	// 0x33be7329
// declared property setter: - (void)setMobileTelephoneNumber:(id)number;	// 0x33be6f81
// declared property setter: - (void)setNickName:(id)name;	// 0x33be7305
// declared property setter: - (void)setOfficeLocation:(id)location;	// 0x33be6fa5
// declared property setter: - (void)setOtherAddressCity:(id)city;	// 0x33be6fc9
// declared property setter: - (void)setOtherAddressCountry:(id)country;	// 0x33be6fed
// declared property setter: - (void)setOtherAddressPostalCode:(id)code;	// 0x33be7011
// declared property setter: - (void)setOtherAddressState:(id)state;	// 0x33be7035
// declared property setter: - (void)setOtherAddressStreet:(id)street;	// 0x33be7059
// declared property setter: - (void)setPagerNumber:(id)number;	// 0x33be707d
// declared property setter: - (void)setPicture:(id)picture;	// 0x33be70a1
// declared property setter: - (void)setRadioTelephoneNumber:(id)number;	// 0x33be70c5
// declared property setter: - (void)setSpouse:(id)spouse;	// 0x33be70e9
// declared property setter: - (void)setSuffix:(id)suffix;	// 0x33be710d
// declared property setter: - (void)setTitle:(id)title;	// 0x33be7131
// declared property setter: - (void)setWebpage:(id)webpage;	// 0x33be7155
// declared property setter: - (void)setYomiCompanyName:(id)name;	// 0x33be7179
// declared property setter: - (void)setYomiFirstName:(id)name;	// 0x33be719d
// declared property setter: - (void)setYomiLastName:(id)name;	// 0x33be71c1
// declared property getter: - (id)spouse;	// 0x33be70d5
// declared property getter: - (id)suffix;	// 0x33be70f9
// declared property getter: - (id)title;	// 0x33be711d
// declared property getter: - (id)webpage;	// 0x33be7141
// declared property getter: - (id)yomiCompanyName;	// 0x33be7165
// declared property getter: - (id)yomiFirstName;	// 0x33be7189
// declared property getter: - (id)yomiLastName;	// 0x33be71ad
@end

