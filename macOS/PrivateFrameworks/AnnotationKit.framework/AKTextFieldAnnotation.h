//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKTextBoxAnnotation.h>

@class NSString;

@interface AKTextFieldAnnotation : AKTextBoxAnnotation
{
    NSString *_fieldName;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

