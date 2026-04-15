---
name: philosophy-puffer
description: Use when the user wants a sentence, paragraph, or short statement rewritten into a dense, pseudo-philosophical, theory-flavored style; especially for requests mentioning 扩写, 黑格尔, 拉康, 学院派, 啰嗦一点, 唬人一点, or a stronger rewrite mode.
argument-hint: '更强 这句话；普通 这句话；黑格尔 这句话；拉康 这句话'
user-invocable: true
---

# Philosophy Puffer

Expand plain language into verbose, theory-flavored prose that sounds abstract, serious, and faintly intimidating without collapsing into pure nonsense.

## When to Use

Use this skill when the user:
- wants a sentence "扩写"
- wants text to sound 哲学、黑格尔、拉康、学院派、理论化
- wants wording that is 啰嗦一点、唬人一点、抽象一点
- provides a short statement and wants it made more imposing

Do not use when the user wants:
- clear explanation for learning
- accurate academic summary of real philosophers
- faithful translation of Hegel, Lacan, or other theorists
- concise writing

## Core Principle

Keep the original claim intact, but wrap it in:
1. one layer of abstraction
2. one layer of reflexive qualification
3. one layer of conceptual expansion

The result should sound heavier than the source, but still point back to a real underlying meaning.

## Core Pattern

Rewrite by preserving the plain claim, then adding:
- one layer of abstraction
- one layer of reflexive qualification
- one layer of conceptual expansion

Target traits:
- abstract but still interpretable
- long sentences with controlled recursion
- confident phrasing with contrasts like 表面/深层, 直接/中介, 对象/过程
- recurring pivots such as "并不在于…而在于…", "恰恰", "换言之"

Useful scaffolds:
- "这并不意味着……，恰恰相反，它所暴露的是……"
- "如果说……只是表层呈现，那么真正值得注意的乃是……"
- "问题从来不在于……本身，而在于它如何在……中被组织出来"
- "换言之，……并不是一个现成对象，而是一个不断通过其反面被规定的过程"

Never lose semantic traceability:
- the original meaning must remain recoverable
- avoid empty jargon piles, fake quotations, or total incoherence

## Style Patterns

### Pattern A: Hegelian Inflation
Best for making ordinary judgments sound dialectical.

Template:

```text
你以为{surface claim}，但真正的问题并不在于{surface object}本身，而在于它如何作为一种{relation/process}被把握。因为一旦我们把它当作一个既成事实来接受，就已经忽略了其中真正起作用的，恰恰是那种通过其自身否定而展开的结构性运动。
```

### Pattern B: Lacanian Inflation
Best for making emotions, desire, misunderstanding, or speech sound psychoanalytic.

Template:

```text
表面上看，{surface claim}只是一个直接的经验判断；但若事情仅止于此，它就不会以这种方式反复出现。真正需要追问的不是主体说了什么，而是主体为什么只能以这种方式说出它。换言之，被表达出来的内容从来不只是内容本身，而是欲望在话语结构中的一次症状性显现。
```

### Pattern C: Academic Bluff, Light Version
Best when user wants 唬人 but still readable.

Template:

```text
{original sentence}。但若仅仅停留在这一表述层面，我们实际上还没有触及问题的核心。更准确地说，这里所呈现的并不是一个可以被直接确认的结论，而是一种在具体情境中逐步显形的关系性结构。
```

## Invocation

This skill can be called directly with arguments.

Preferred argument formats:
- `普通 这句话`
- `更强 这句话`
- `黑格尔 这句话`
- `拉康 这句话`
- `更强 黑格尔 这句话`
- `重度 这句话`

Parse arguments in this order:
1. **Strength**: `轻度` / `普通` / `中度` / `重度` / `更强`
2. **Flavor**: `黑格尔` / `拉康` / `学院派`
3. Remaining text = source sentence to rewrite

If no strength is provided, default to `中度`.
If no flavor is provided, choose whichever best fits the sentence.

If arguments contain only the sentence, rewrite it directly.

## Output Modes

Choose one based on the user's wording:

- **轻度扩写**: 1 sentence → 2-3 sentences
- **中度扩写**: 1 sentence → 1 dense paragraph
- **重度扩写**: 1 sentence → 1 elaborate paragraph with recursive qualifiers
- **更强改写**: 1 sentence → 1 longer, more oppressive paragraph with sharper contrast between surface and underlying structure

If the user does not specify intensity, default to **中度扩写**.

### Stronger Mode Rules

When the user asks for `更强`:
- intensify cadence, not nonsense
- add one extra layer of mediation and disappointment, contradiction, desire, structure, or symbolic inflation
- allow longer sentences and more recursive qualifications
- keep the source meaning fully recoverable
- do not cross into pure parody unless the user explicitly wants that

## Good Transformations

### Example 1
Input:
```text
我听懂了。
```

Output:
```text
如果你说“我听懂了”，这并不意味着理解已经作为某种稳定的知识被你所占有；恰恰相反，这句话所暴露的，往往只是主体在某一时刻暂时停止追问之后，对意义连续性的一次自我确认。换言之，所谓“听懂”并不是理解的终点，而更像是理解在尚未展开其内在复杂性之前，向自身作出的一次过早的和解。
```

### Example 2
Input:
```text
他不回我消息了。
```

Output:
```text
表面上看，“他不回我消息了”似乎只是一个再直接不过的事实陈述；但真正使人无法轻易安放的，从来不是这个行为本身，而是主体在这一沉默之中被迫面对的关系性失衡。也就是说，未被回复的并不只是消息内容，而是主体投向他者的期待，在延迟与空白之中被重新组织为一种带有不确定性的意义经验。
```

## Common Mistakes

### Mistake: Empty jargon pile
Bad:
```text
这是主体间性在超越性维度上的话语褶皱。
```
Why bad: sounds fancy but loses anchor.

### Mistake: Meaning drift
Bad expansion changes the original point.

### Mistake: Overusing namedropping
Do not mention Hegel, Lacan, Žižek, différance, objet petit a, etc. unless the user asks.
Imitate cadence, not citation theater.

## Response Rules

When using this skill:
1. Expand in Chinese unless the user asks otherwise.
2. Return only the rewritten text unless the user asks for alternatives.
3. If the source is already ornate, amplify lightly instead of doubling the chaos.
4. Prefer readability over maximal jargon density.

## Quick Reference

| User input | Result |
|---|---|
| `/philosophy-puffer 这句话` | 中度扩写 |
| `/philosophy-puffer 普通 这句话` | 中度扩写 |
| `/philosophy-puffer 更强 这句话` | 更强改写 |
| `/philosophy-puffer 黑格尔 这句话` | 黑格尔风格 |
| `/philosophy-puffer 拉康 这句话` | 拉康风格 |
| `/philosophy-puffer 更强 黑格尔 这句话` | 更强 + 黑格尔风格 |
| “别太离谱” | 轻度扩写 |

## Bottom Line

This skill is for controlled rhetorical inflation.
Make the sentence sound deeper, not random; heavier, not broken; abstract, not empty.