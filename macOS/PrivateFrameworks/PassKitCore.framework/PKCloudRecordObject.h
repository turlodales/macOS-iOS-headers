//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSObject<PKCloudStoreCoding>;

@interface PKCloudRecordObject : NSObject <NSSecureCoding>
{
    NSArray *_records;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *records; // @synthesize records=_records;
- (id)_descriptionWithDetailedOutput:(BOOL)arg1;
- (id)description;
- (id)descriptionWithItem:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<PKCloudStoreCoding> *item;
- (id)initWithRecords:(id)arg1;

@end

