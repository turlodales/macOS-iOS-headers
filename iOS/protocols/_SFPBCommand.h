/* Generated by RuntimeBrowser.
 */

@protocol _SFPBCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setType:(int)arg1;
- (void)setValue:(_SFPBNewCommandValue *)arg1;
- (int)type;
- (_SFPBNewCommandValue *)value;

@end
