//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICDataPersister.h"
#import "NSSecureCoding.h"

@class ICDataCryptor, NSMutableArray, NSMutableDictionary, NSString, NSURL;

@interface ICDataPersister : NSObject <ICDataPersister, NSSecureCoding>
{
    unsigned long long _accumulatedDataSize;
    ICDataCryptor *_dataCryptor;
    NSURL *_cacheDirectoryURL;
    NSString *_objectIdentifier;
    NSMutableArray *_allURLs;
    NSMutableDictionary *_identifierToDataDictionary;
}

+ (BOOL)supportsSecureCoding;
+ (void)deletePasteboardDataFiles;
+ (id)rootCacheDirectoryPathForPasteboard:(BOOL)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *identifierToDataDictionary; // @synthesize identifierToDataDictionary=_identifierToDataDictionary;
@property(readonly, nonatomic) NSMutableArray *allURLs; // @synthesize allURLs=_allURLs;
@property(readonly, nonatomic) NSString *objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property(readonly, nonatomic) NSURL *cacheDirectoryURL; // @synthesize cacheDirectoryURL=_cacheDirectoryURL;
@property(readonly, nonatomic) ICDataCryptor *dataCryptor; // @synthesize dataCryptor=_dataCryptor;
@property(nonatomic) unsigned long long accumulatedDataSize; // @synthesize accumulatedDataSize=_accumulatedDataSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)verifyDataFiles;
- (void)deleteDataFiles;
- (id)loadDataForIdentifier:(id)arg1;
- (BOOL)saveData:(id)arg1 identifier:(id)arg2;
- (BOOL)makeSureCacheDirectoryExists;
- (void)createDataCryptorIfNecessary;
- (id)description;
- (id)initWithObjectIdentifier:(id)arg1 forPasteboard:(BOOL)arg2;
- (id)init;

@end

