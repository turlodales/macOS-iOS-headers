//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMControlDescriptorValue.h>

@class NSString;

@interface AVB17221AEMControlDescriptorUTF8Value : AVB17221AEMControlDescriptorValue
{
    NSString *value;
}

@property(copy) NSString *value; // @synthesize value;
- (void)dealloc;
- (BOOL)validControlValueType:(unsigned short)arg1;
- (id)objectsForSetCommandValuesData:(id)arg1;
- (id)debugLogStringWithIndentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)updateWithValueXMLElement:(id)arg1;
- (id)valueXMLElement;
- (id)valueDictionary;
- (BOOL)updateWithValueDictionary:(id)arg1;
- (id)currentValueData;
- (void)setCurrentValueData:(id)arg1;
- (unsigned long long)currentValueSize;
- (unsigned short)numberOfValues;
- (unsigned long long)valuesSize;
- (char *)setValuesAtPointer:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)initWithValuePointer:(char **)arg1 utf8Length:(unsigned short)arg2;

@end

