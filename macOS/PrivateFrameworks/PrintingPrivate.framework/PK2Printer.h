//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSMutableArray, NSString;

@interface PK2Printer : NSObject <NSSecureCoding>
{
    NSString *_dnssdName;
    NSString *_identifier;
    NSMutableArray *_txts;
    NSString *_printerURL;
    BOOL _isManagedPrinter;
    unsigned char _power;
}

+ (BOOL)supportsSecureCoding;
+ (id)softwareUpdateRepresentation:(id)arg1;
+ (id)model:(id)arg1;
+ (id)make:(id)arg1;
+ (id)searchForKeys:(id)arg1 deviceID:(id)arg2;
@property(nonatomic) unsigned char power; // @synthesize power=_power;
@property(nonatomic) BOOL isManagedPrinter; // @synthesize isManagedPrinter=_isManagedPrinter;
@property(retain, nonatomic) NSString *printerURL; // @synthesize printerURL=_printerURL;
@property(retain, nonatomic) NSMutableArray *txts; // @synthesize txts=_txts;
@property(copy, nonatomic) NSString *dnssdName; // @synthesize dnssdName=_dnssdName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)removeTxtRecordsWithInterfaceIndex:(unsigned int)arg1 ofType:(id)arg2;
- (unsigned long long)appendTxtRecords:(id)arg1;
@property(readonly) NSDictionary *dictionaryRepresentation;
- (BOOL)queueExists:(id)arg1;
- (id)getQueryKey:(id)arg1 components:(id)arg2;
@property(readonly, nonatomic) long long type;
- (id)txtOfType:(id)arg1;
- (id)txt;
- (id)ty;
@property(readonly, nonatomic) unsigned long long attributes;
- (unsigned long long)stateReasons;
@property(readonly, nonatomic) unsigned long long jobTypesSupported;
@property(readonly, nonatomic) unsigned long long authentication;
@property(readonly, nonatomic) NSString *sanatizedModel;
@property(readonly, nonatomic) NSString *sanatizedMake;
@property(readonly, nonatomic) NSString *sanitizedLocation;
@property(readonly, nonatomic) NSString *sanitizedName;
- (id)URLs;
@property(readonly, nonatomic) NSString *URL;
@property(readonly, nonatomic) NSString *adminURL;
@property(readonly, nonatomic) NSString *resourcePath;
@property(readonly, nonatomic) NSString *product;
@property(readonly, nonatomic) NSString *dnssdDomain;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) NSString *location;
@property(readonly, nonatomic) NSString *name;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initPrinterWithURL:(id)arg1 txt:(id)arg2;
- (id)initPrinterWithName:(id)arg1 txts:(id)arg2;
- (id)initPrinterWithName:(id)arg1;
- (id)init;

@end

