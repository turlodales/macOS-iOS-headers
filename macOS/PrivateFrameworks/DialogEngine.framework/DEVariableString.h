//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DialogEngine/DEVariable.h>

@class NSString;

@interface DEVariableString : DEVariable
{
}

- (void)setValuePrint:(id)arg1 speak:(id)arg2;
@property(readonly) NSString *speakValue;
@property(readonly) NSString *printValue;
- (id)initWithName:(id)arg1 print:(id)arg2 speak:(id)arg3;
- (id)initWithName:(id)arg1 string:(id)arg2;
- (id)init;

@end

