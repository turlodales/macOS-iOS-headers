//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Automator/AMXPCToken.h>

@interface AMActionPropertyListXPCToken : AMXPCToken
{
    id _propertyList;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) id propertyList; // @synthesize propertyList=_propertyList;
- (id)_am_convertFromXPCWithWorkflow:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyList:(id)arg1;

@end

