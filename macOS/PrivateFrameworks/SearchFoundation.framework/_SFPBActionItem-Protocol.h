//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBGraphicalFloat, _SFPBImage, _SFPBLatLng, _SFPBPunchout, _SFPBURL;

@protocol _SFPBActionItem <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *universalLibraryID;
@property(nonatomic) int mediaEntityType;
@property(copy, nonatomic) NSString *persistentID;
@property(retain, nonatomic) _SFPBURL *messageURL;
@property(copy, nonatomic) NSString *messageIdentifier;
@property(retain, nonatomic) _SFPBLatLng *location;
@property(retain, nonatomic) _SFPBImage *baseIcon;
@property(retain, nonatomic) _SFPBImage *icon;
@property(nonatomic) BOOL isITunes;
@property(copy, nonatomic) NSString *labelITunes;
@property(copy, nonatomic) NSString *type;
@property(copy, nonatomic) NSString *offerType;
@property(copy, nonatomic) NSString *provider;
@property(retain, nonatomic) _SFPBGraphicalFloat *longitude;
@property(retain, nonatomic) _SFPBGraphicalFloat *latitude;
@property(copy, nonatomic) NSData *mapsData;
@property(copy, nonatomic) NSString *email;
@property(copy, nonatomic) NSString *phoneNumber;
@property(copy, nonatomic) NSString *contactIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(retain, nonatomic) _SFPBPunchout *punchout;
@property(copy, nonatomic) NSString *localMediaIdentifier;
@property(nonatomic) BOOL requiresLocalMedia;
@property(copy, nonatomic) NSArray *storeIdentifiers;
@property(nonatomic) BOOL isOverlay;
@property(copy, nonatomic) NSString *labelForLocalMedia;
@property(copy, nonatomic) NSString *label;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)storeIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)storeIdentifiersCount;
- (void)addStoreIdentifiers:(NSString *)arg1;
- (void)clearStoreIdentifiers;
@end

