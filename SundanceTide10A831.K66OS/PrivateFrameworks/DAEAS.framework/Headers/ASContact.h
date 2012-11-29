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
@property(retain) NSString *accountName;	// G=0x36e4753d; S=0x36e47551; @synthesize=_accountName
@property(retain) NSDate *anniversary;	// G=0x36e46ccd; S=0x36e46ce1; @synthesize=_anniversary
@property(retain) NSString *assistantName;	// G=0x36e46cf1; S=0x36e46d05; @synthesize=_assistantName
@property(retain) NSString *assistantTelephoneNumber;	// G=0x36e46d15; S=0x36e46d29; @synthesize=_assistantTelephoneNumber
@property(retain) NSDate *birthday;	// G=0x36e46d39; S=0x36e46d4d; @synthesize=_birthday
@property(retain, nonatomic) NSString *body;	// G=0x36e46d5d; S=0x36e46aa9; @synthesize=_body
@property(assign) int bodySize;	// G=0x36e46d6d; S=0x36e46d81; @synthesize=_bodySize
@property(assign) BOOL bodyTruncated;	// G=0x36e46d99; S=0x36e46db1; @synthesize=_bodyTruncated
@property(retain) NSString *business2TelephoneNumber;	// G=0x36e46dc9; S=0x36e46ddd; @synthesize=_business2TelephoneNumber
@property(retain) NSString *businessAddressCity;	// G=0x36e46ded; S=0x36e46e01; @synthesize=_businessAddressCity
@property(retain) NSString *businessAddressCountry;	// G=0x36e46e11; S=0x36e46e25; @synthesize=_businessAddressCountry
@property(retain) NSString *businessAddressPostalCode;	// G=0x36e46e35; S=0x36e46e49; @synthesize=_businessAddressPostalCode
@property(retain) NSString *businessAddressState;	// G=0x36e46e59; S=0x36e46e6d; @synthesize=_businessAddressState
@property(retain) NSString *businessAddressStreet;	// G=0x36e46e7d; S=0x36e46e91; @synthesize=_businessAddressStreet
@property(retain) NSString *businessFaxNumber;	// G=0x36e46ea1; S=0x36e46eb5; @synthesize=_businessFaxNumber
@property(retain) NSString *businessTelephoneNumber;	// G=0x36e46ec5; S=0x36e46ed9; @synthesize=_businessTelephoneNumber
@property(retain) NSString *carTelephoneNumber;	// G=0x36e46f31; S=0x36e46f45; @synthesize=_carTelephoneNumber
@property(retain) NSArray *categories;	// G=0x36e46ee9; S=0x36e46efd; @synthesize=_categories
@property(retain) NSArray *children;	// G=0x36e46f0d; S=0x36e46f21; @synthesize=_children
@property(retain) NSString *companyMainPhone;	// G=0x36e47519; S=0x36e4752d; @synthesize=_companyMainPhone
@property(retain) NSString *companyName;	// G=0x36e46f55; S=0x36e46f69; @synthesize=_companyName
@property(retain) NSString *customerID;	// G=0x36e47441; S=0x36e47455; @synthesize=_customerID
@property(retain) NSString *department;	// G=0x36e46f79; S=0x36e46f8d; @synthesize=_department
@property(retain) NSString *email1Address;	// G=0x36e46f9d; S=0x36e46fb1; @synthesize=_email1Address
@property(retain) NSString *email2Address;	// G=0x36e46fc1; S=0x36e46fd5; @synthesize=_email2Address
@property(retain) NSString *email3Address;	// G=0x36e46fe5; S=0x36e46ff9; @synthesize=_email3Address
@property(retain) NSString *fileAs;	// G=0x36e47009; S=0x36e4701d; @synthesize=_fileAs
@property(retain) NSString *firstName;	// G=0x36e4702d; S=0x36e47041; @synthesize=_firstName
@property(retain) NSString *governmentID;	// G=0x36e47465; S=0x36e47479; @synthesize=_governmentID
@property(retain) NSString *home2TelephoneNumber;	// G=0x36e47051; S=0x36e47065; @synthesize=_home2TelephoneNumber
@property(retain) NSString *homeAddressCity;	// G=0x36e47075; S=0x36e47089; @synthesize=_homeAddressCity
@property(retain) NSString *homeAddressCountry;	// G=0x36e47099; S=0x36e470ad; @synthesize=_homeAddressCountry
@property(retain) NSString *homeAddressPostalCode;	// G=0x36e470bd; S=0x36e470d1; @synthesize=_homeAddressPostalCode
@property(retain) NSString *homeAddressState;	// G=0x36e470e1; S=0x36e470f5; @synthesize=_homeAddressState
@property(retain) NSString *homeAddressStreet;	// G=0x36e47105; S=0x36e47119; @synthesize=_homeAddressStreet
@property(retain) NSString *homeFaxNumber;	// G=0x36e4714d; S=0x36e47161; @synthesize=_homeFaxNumber
@property(retain) NSString *homeTelephoneNumber;	// G=0x36e47129; S=0x36e4713d; @synthesize=_homeTelephoneNumber
@property(retain) NSString *im1Address;	// G=0x36e47489; S=0x36e4749d; @synthesize=_im1Address
@property(retain) NSString *im2Address;	// G=0x36e474ad; S=0x36e474c1; @synthesize=_im2Address
@property(retain) NSString *im3Address;	// G=0x36e474d1; S=0x36e474e5; @synthesize=_im3Address
@property(retain) NSString *jobTitle;	// G=0x36e47171; S=0x36e47185; @synthesize=_jobTitle
@property(retain) NSString *lastName;	// G=0x36e47195; S=0x36e471a9; @synthesize=_lastName
@property(retain) NSString *managerName;	// G=0x36e474f5; S=0x36e47509; @synthesize=_managerName
@property(retain) NSString *middleName;	// G=0x36e471b9; S=0x36e471cd; @synthesize=_middleName
@property(retain) NSString *mms;	// G=0x36e47585; S=0x36e47599; @synthesize=_mms
@property(retain) NSString *mobileTelephoneNumber;	// G=0x36e471dd; S=0x36e471f1; @synthesize=_mobileTelephoneNumber
@property(retain) NSString *nickName;	// G=0x36e47561; S=0x36e47575; @synthesize=_nickName
@property(retain) NSString *officeLocation;	// G=0x36e47201; S=0x36e47215; @synthesize=_officeLocation
@property(retain) NSString *otherAddressCity;	// G=0x36e47225; S=0x36e47239; @synthesize=_otherAddressCity
@property(retain) NSString *otherAddressCountry;	// G=0x36e47249; S=0x36e4725d; @synthesize=_otherAddressCountry
@property(retain) NSString *otherAddressPostalCode;	// G=0x36e4726d; S=0x36e47281; @synthesize=_otherAddressPostalCode
@property(retain) NSString *otherAddressState;	// G=0x36e47291; S=0x36e472a5; @synthesize=_otherAddressState
@property(retain) NSString *otherAddressStreet;	// G=0x36e472b5; S=0x36e472c9; @synthesize=_otherAddressStreet
@property(retain) NSString *pagerNumber;	// G=0x36e472d9; S=0x36e472ed; @synthesize=_pagerNumber
@property(retain) NSString *picture;	// G=0x36e472fd; S=0x36e47311; @synthesize=_picture
@property(retain) NSString *radioTelephoneNumber;	// G=0x36e47321; S=0x36e47335; @synthesize=_radioTelephoneNumber
@property(retain) NSString *spouse;	// G=0x36e47345; S=0x36e47359; @synthesize=_spouse
@property(retain) NSString *suffix;	// G=0x36e47369; S=0x36e4737d; @synthesize=_suffix
@property(retain) NSString *title;	// G=0x36e4738d; S=0x36e473a1; @synthesize=_title
@property(retain) NSString *webpage;	// G=0x36e473b1; S=0x36e473c5; @synthesize=_webpage
@property(retain) NSString *yomiCompanyName;	// G=0x36e473d5; S=0x36e473e9; @synthesize=_yomiCompanyName
@property(retain) NSString *yomiFirstName;	// G=0x36e473f9; S=0x36e4740d; @synthesize=_yomiFirstName
@property(retain) NSString *yomiLastName;	// G=0x36e4741d; S=0x36e47431; @synthesize=_yomiLastName
+ (void)_setSystemTimeZoneForUnitTests:(id)unitTests;	// 0x36e3e345
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e3e1a1
+ (id)asParseRules;	// 0x36e3e451
+ (id)contactWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x36e40c6d
+ (BOOL)frontingBasicTypes;	// 0x36e3e29d
+ (BOOL)notifyOfUnknownTokens;	// 0x36e3e2f1
+ (BOOL)parsingLeafNode;	// 0x36e3e1f5
+ (BOOL)parsingWithSubItems;	// 0x36e3e249
- (id)initWithABRecord:(void *)abrecord serverID:(id)anId;	// 0x36e40bf9
- (id)initWithCoder:(id)coder;	// 0x36e46b15
- (void)_detectFileAsAutoConstruction;	// 0x36e3f9b5
- (void)_loadAttributesFromABRecord:(void *)abrecord;	// 0x36e406f9
- (void)_reconstructFileAsField;	// 0x36e40209
- (BOOL)_saveDatesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36e40cad
- (BOOL)_saveEmailsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36e41ea1
- (BOOL)_saveExternalRepToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties storeExternalRep:(BOOL)rep;	// 0x36e42799
- (BOOL)_saveIMsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36e42365
- (BOOL)_savePhoneNumbersToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36e4106d
- (BOOL)_saveRelatedNamesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36e40e35
- (BOOL)_saveStreetAddressesToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36e418d5
- (BOOL)_saveURLsToAddressBookWithExistingRecord:(void *)existingRecord shouldMergeProperties:(BOOL)properties;	// 0x36e421f9
- (BOOL)_setDatesWithExistingRecord:(void *)existingRecord;	// 0x36e3e991
- (BOOL)_setEmailsWithExistingRecord:(void *)existingRecord;	// 0x36e3f30d
- (BOOL)_setExternalRepWithExistingRecord:(void *)existingRecord;	// 0x36e3f591
- (BOOL)_setIMsWithExistingRecord:(void *)existingRecord;	// 0x36e3f49d
- (void)_setImageOnContactFromPerson:(void *)person;	// 0x36e3e8d9
- (BOOL)_setPhoneNumbersWithExistingRecord:(void *)existingRecord;	// 0x36e3ebb1
- (BOOL)_setRelatedNamesWithExistingRecord:(void *)existingRecord;	// 0x36e3ea79
- (BOOL)_setStreetAddressesWithExistingRecord:(void *)existingRecord;	// 0x36e3ef85
- (BOOL)_setURLsWithExistingRecord:(void *)existingRecord;	// 0x36e3f3cd
- (id)_transformedDateForABFramework:(id)abframework;	// 0x36e3e37d
- (id)_transformedDateForActiveSync:(id)activeSync;	// 0x36e3e3b9
// declared property getter: - (id)accountName;	// 0x36e4753d
// declared property getter: - (id)anniversary;	// 0x36e46ccd
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x36e437b5
// declared property getter: - (id)assistantName;	// 0x36e46cf1
// declared property getter: - (id)assistantTelephoneNumber;	// 0x36e46d15
// declared property getter: - (id)birthday;	// 0x36e46d39
// declared property getter: - (id)body;	// 0x36e46d5d
// declared property getter: - (int)bodySize;	// 0x36e46d6d
// declared property getter: - (BOOL)bodyTruncated;	// 0x36e46d99
// declared property getter: - (id)business2TelephoneNumber;	// 0x36e46dc9
// declared property getter: - (id)businessAddressCity;	// 0x36e46ded
// declared property getter: - (id)businessAddressCountry;	// 0x36e46e11
// declared property getter: - (id)businessAddressPostalCode;	// 0x36e46e35
// declared property getter: - (id)businessAddressState;	// 0x36e46e59
// declared property getter: - (id)businessAddressStreet;	// 0x36e46e7d
// declared property getter: - (id)businessFaxNumber;	// 0x36e46ea1
// declared property getter: - (id)businessTelephoneNumber;	// 0x36e46ec5
// declared property getter: - (id)carTelephoneNumber;	// 0x36e46f31
// declared property getter: - (id)categories;	// 0x36e46ee9
// declared property getter: - (id)children;	// 0x36e46f0d
// declared property getter: - (id)companyMainPhone;	// 0x36e47519
// declared property getter: - (id)companyName;	// 0x36e46f55
// declared property getter: - (id)customerID;	// 0x36e47441
- (int)dataclass;	// 0x36e3e8d5
- (void)dealloc;	// 0x36e46301
- (BOOL)deleteFromAddressBook;	// 0x36e436e9
- (BOOL)deleteFromContainer:(void *)container;	// 0x36e46cb5
// declared property getter: - (id)department;	// 0x36e46f79
- (id)description;	// 0x36e46911
// declared property getter: - (id)email1Address;	// 0x36e46f9d
// declared property getter: - (id)email2Address;	// 0x36e46fc1
// declared property getter: - (id)email3Address;	// 0x36e46fe5
- (void)encodeWithCoder:(id)coder;	// 0x36e46b95
// declared property getter: - (id)fileAs;	// 0x36e47009
// declared property getter: - (id)firstName;	// 0x36e4702d
// declared property getter: - (id)governmentID;	// 0x36e47465
// declared property getter: - (id)home2TelephoneNumber;	// 0x36e47051
// declared property getter: - (id)homeAddressCity;	// 0x36e47075
// declared property getter: - (id)homeAddressCountry;	// 0x36e47099
// declared property getter: - (id)homeAddressPostalCode;	// 0x36e470bd
// declared property getter: - (id)homeAddressState;	// 0x36e470e1
// declared property getter: - (id)homeAddressStreet;	// 0x36e47105
// declared property getter: - (id)homeFaxNumber;	// 0x36e4714d
// declared property getter: - (id)homeTelephoneNumber;	// 0x36e47129
// declared property getter: - (id)im1Address;	// 0x36e47489
// declared property getter: - (id)im2Address;	// 0x36e474ad
// declared property getter: - (id)im3Address;	// 0x36e474d1
// declared property getter: - (id)jobTitle;	// 0x36e47171
// declared property getter: - (id)lastName;	// 0x36e47195
- (BOOL)loadABRecord;	// 0x36e434ad
- (void)loadClientIDs;	// 0x36e43689
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x36e46c85
// declared property getter: - (id)managerName;	// 0x36e474f5
// declared property getter: - (id)middleName;	// 0x36e471b9
// declared property getter: - (id)mms;	// 0x36e47585
// declared property getter: - (id)mobileTelephoneNumber;	// 0x36e471dd
// declared property getter: - (id)nickName;	// 0x36e47561
// declared property getter: - (id)officeLocation;	// 0x36e47201
// declared property getter: - (id)otherAddressCity;	// 0x36e47225
// declared property getter: - (id)otherAddressCountry;	// 0x36e47249
// declared property getter: - (id)otherAddressPostalCode;	// 0x36e4726d
// declared property getter: - (id)otherAddressState;	// 0x36e47291
// declared property getter: - (id)otherAddressStreet;	// 0x36e472b5
// declared property getter: - (id)pagerNumber;	// 0x36e472d9
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36e46819
// declared property getter: - (id)picture;	// 0x36e472fd
- (void)postProcessApplicationData;	// 0x36e44851
// declared property getter: - (id)radioTelephoneNumber;	// 0x36e47321
- (BOOL)saveServerIDToContact;	// 0x36e43645
- (BOOL)saveServerIDToExistingItem;	// 0x36e46c9d
- (BOOL)saveToAddressBookWithExistingRecord:(void *)existingRecord inSource:(void *)source shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge storeExternalRep:(BOOL)rep;	// 0x36e42c99
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x36e46c11
- (void)setABRecord:(void *)record;	// 0x36e43461
// declared property setter: - (void)setAccountName:(id)name;	// 0x36e47551
// declared property setter: - (void)setAnniversary:(id)anniversary;	// 0x36e46ce1
// declared property setter: - (void)setAssistantName:(id)name;	// 0x36e46d05
// declared property setter: - (void)setAssistantTelephoneNumber:(id)number;	// 0x36e46d29
// declared property setter: - (void)setBirthday:(id)birthday;	// 0x36e46d4d
// declared property setter: - (void)setBody:(id)body;	// 0x36e46aa9
// declared property setter: - (void)setBodySize:(int)size;	// 0x36e46d81
- (void)setBodySizeNumber:(id)number;	// 0x36e468b1
// declared property setter: - (void)setBodyTruncated:(BOOL)truncated;	// 0x36e46db1
- (void)setBodyTruncatedNumber:(id)number;	// 0x36e468e1
// declared property setter: - (void)setBusiness2TelephoneNumber:(id)number;	// 0x36e46ddd
// declared property setter: - (void)setBusinessAddressCity:(id)city;	// 0x36e46e01
// declared property setter: - (void)setBusinessAddressCountry:(id)country;	// 0x36e46e25
// declared property setter: - (void)setBusinessAddressPostalCode:(id)code;	// 0x36e46e49
// declared property setter: - (void)setBusinessAddressState:(id)state;	// 0x36e46e6d
// declared property setter: - (void)setBusinessAddressStreet:(id)street;	// 0x36e46e91
// declared property setter: - (void)setBusinessFaxNumber:(id)number;	// 0x36e46eb5
// declared property setter: - (void)setBusinessTelephoneNumber:(id)number;	// 0x36e46ed9
// declared property setter: - (void)setCarTelephoneNumber:(id)number;	// 0x36e46f45
// declared property setter: - (void)setCategories:(id)categories;	// 0x36e46efd
// declared property setter: - (void)setChildren:(id)children;	// 0x36e46f21
// declared property setter: - (void)setCompanyMainPhone:(id)phone;	// 0x36e4752d
// declared property setter: - (void)setCompanyName:(id)name;	// 0x36e46f69
// declared property setter: - (void)setCustomerID:(id)anId;	// 0x36e47455
// declared property setter: - (void)setDepartment:(id)department;	// 0x36e46f8d
// declared property setter: - (void)setEmail1Address:(id)address;	// 0x36e46fb1
// declared property setter: - (void)setEmail2Address:(id)address;	// 0x36e46fd5
// declared property setter: - (void)setEmail3Address:(id)address;	// 0x36e46ff9
- (void)setEmailFromAppData:(int)appData setter:(SEL)setter;	// 0x36e447c9
// declared property setter: - (void)setFileAs:(id)as;	// 0x36e4701d
// declared property setter: - (void)setFirstName:(id)name;	// 0x36e47041
// declared property setter: - (void)setGovernmentID:(id)anId;	// 0x36e47479
// declared property setter: - (void)setHome2TelephoneNumber:(id)number;	// 0x36e47065
// declared property setter: - (void)setHomeAddressCity:(id)city;	// 0x36e47089
// declared property setter: - (void)setHomeAddressCountry:(id)country;	// 0x36e470ad
// declared property setter: - (void)setHomeAddressPostalCode:(id)code;	// 0x36e470d1
// declared property setter: - (void)setHomeAddressState:(id)state;	// 0x36e470f5
// declared property setter: - (void)setHomeAddressStreet:(id)street;	// 0x36e47119
// declared property setter: - (void)setHomeFaxNumber:(id)number;	// 0x36e47161
// declared property setter: - (void)setHomeTelephoneNumber:(id)number;	// 0x36e4713d
// declared property setter: - (void)setIm1Address:(id)address;	// 0x36e4749d
// declared property setter: - (void)setIm2Address:(id)address;	// 0x36e474c1
// declared property setter: - (void)setIm3Address:(id)address;	// 0x36e474e5
// declared property setter: - (void)setJobTitle:(id)title;	// 0x36e47185
// declared property setter: - (void)setLastName:(id)name;	// 0x36e471a9
- (void)setLocalItem:(void *)item;	// 0x36e46c75
// declared property setter: - (void)setManagerName:(id)name;	// 0x36e47509
// declared property setter: - (void)setMiddleName:(id)name;	// 0x36e471cd
// declared property setter: - (void)setMms:(id)mms;	// 0x36e47599
// declared property setter: - (void)setMobileTelephoneNumber:(id)number;	// 0x36e471f1
// declared property setter: - (void)setNickName:(id)name;	// 0x36e47575
// declared property setter: - (void)setOfficeLocation:(id)location;	// 0x36e47215
// declared property setter: - (void)setOtherAddressCity:(id)city;	// 0x36e47239
// declared property setter: - (void)setOtherAddressCountry:(id)country;	// 0x36e4725d
// declared property setter: - (void)setOtherAddressPostalCode:(id)code;	// 0x36e47281
// declared property setter: - (void)setOtherAddressState:(id)state;	// 0x36e472a5
// declared property setter: - (void)setOtherAddressStreet:(id)street;	// 0x36e472c9
// declared property setter: - (void)setPagerNumber:(id)number;	// 0x36e472ed
// declared property setter: - (void)setPicture:(id)picture;	// 0x36e47311
// declared property setter: - (void)setRadioTelephoneNumber:(id)number;	// 0x36e47335
// declared property setter: - (void)setSpouse:(id)spouse;	// 0x36e47359
// declared property setter: - (void)setSuffix:(id)suffix;	// 0x36e4737d
// declared property setter: - (void)setTitle:(id)title;	// 0x36e473a1
// declared property setter: - (void)setWebpage:(id)webpage;	// 0x36e473c5
// declared property setter: - (void)setYomiCompanyName:(id)name;	// 0x36e473e9
// declared property setter: - (void)setYomiFirstName:(id)name;	// 0x36e4740d
// declared property setter: - (void)setYomiLastName:(id)name;	// 0x36e47431
// declared property getter: - (id)spouse;	// 0x36e47345
// declared property getter: - (id)suffix;	// 0x36e47369
// declared property getter: - (id)title;	// 0x36e4738d
// declared property getter: - (id)webpage;	// 0x36e473b1
// declared property getter: - (id)yomiCompanyName;	// 0x36e473d5
// declared property getter: - (id)yomiFirstName;	// 0x36e473f9
// declared property getter: - (id)yomiLastName;	// 0x36e4741d
@end
