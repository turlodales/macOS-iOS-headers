//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TIAnalyticsEventSpec : NSObject
{
    BOOL _isInputModeRequired;
    NSString *_name;
    NSArray *_fieldSpecs;
}

+ (id)eventSpecWithName:(id)arg1 inputModeRequired:(BOOL)arg2 fieldSpecs:(id)arg3;
+ (id)eventSpecWithName:(id)arg1 inputModeRequired:(BOOL)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *fieldSpecs; // @synthesize fieldSpecs=_fieldSpecs;
@property(readonly, nonatomic) BOOL isInputModeRequired; // @synthesize isInputModeRequired=_isInputModeRequired;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 inputModeRequired:(BOOL)arg2 fieldSpecs:(id)arg3;

@end

