//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC8FMClient12SearchResult : NSObject
{
    MISSING_TYPE *devices;
    MISSING_TYPE *resultCode;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) long long resultCode; // @synthesize resultCode;
@property(nonatomic, copy) NSArray *devices;

@end

