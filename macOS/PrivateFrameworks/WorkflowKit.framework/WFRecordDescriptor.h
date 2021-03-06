//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@interface WFRecordDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    Class _recordClass;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class recordClass; // @synthesize recordClass=_recordClass;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithRecordClass:(Class)arg1;

@end

