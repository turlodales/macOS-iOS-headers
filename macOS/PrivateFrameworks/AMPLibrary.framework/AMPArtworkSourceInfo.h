//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface AMPArtworkSourceInfo : NSObject <NSSecureCoding>
{
    unsigned int _kind;
    unsigned long long _dbID;
    unsigned long long _persistentID;
    NSURL *_url;
    unsigned long long _remoteID;
    NSString *_token;
    NSString *_storeID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) unsigned long long remoteID; // @synthesize remoteID=_remoteID;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) unsigned int kind; // @synthesize kind=_kind;
@property(nonatomic) unsigned long long persistentID; // @synthesize persistentID=_persistentID;
@property(nonatomic) unsigned long long dbID; // @synthesize dbID=_dbID;
- (id)initWithCloudLibraryURL:(id)arg1 andToken:(id)arg2 forDBID:(unsigned long long)arg3 forPersistentID:(unsigned long long)arg4;
- (id)initWithCloudLibraryToken:(id)arg1 forDBID:(unsigned long long)arg2 forPersistentID:(unsigned long long)arg3;
- (id)initWithPurchasesURL:(id)arg1 forDBID:(unsigned long long)arg2 forPersistentID:(unsigned long long)arg3;
- (id)initWithDownloadURL:(id)arg1 forDBID:(unsigned long long)arg2 forPersistentID:(unsigned long long)arg3;
- (id)initWithImageURL:(id)arg1 forDBID:(unsigned long long)arg2 forPersistentID:(unsigned long long)arg3;
- (id)initWithID:(unsigned long long)arg1 forDBID:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

