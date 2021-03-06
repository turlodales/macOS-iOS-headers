//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSArray, NSFileProviderSearchQuery;

@interface FPEnumerationSettings : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_sortDescriptors;
    NSFileProviderSearchQuery *_searchQuery;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSFileProviderSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(copy) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

