//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RLMPropertyChange : NSObject
{
    NSString *_name;
    id _previousValue;
    id _value;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

