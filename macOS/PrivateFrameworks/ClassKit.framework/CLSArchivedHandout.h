//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSAbstractHandout.h>

#import "CLSRelationable.h"

@class NSArray, NSString;

@interface CLSArchivedHandout : CLSAbstractHandout <CLSRelationable>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)relations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *attachments;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

