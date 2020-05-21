//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSFileHandle, NSString;

@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSFileHandle *_dataFile;
    long long _dataSize;
    NSArray *_items;
    NSString *_sharedDataPath;
    NSDictionary *_sandboxExtensions;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSDictionary *sandboxExtensions; // @synthesize sandboxExtensions=_sandboxExtensions;
@property(copy) NSString *sharedDataPath; // @synthesize sharedDataPath=_sharedDataPath;
@property(copy) NSArray *items; // @synthesize items=_items;
@property long long dataSize; // @synthesize dataSize=_dataSize;
@property(retain) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

