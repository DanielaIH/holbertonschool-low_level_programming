<h1>0x0E. C - Structures, typedef</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/Rc1JAo6IS9HkELfLUylh2g" target="_blank" title="0x0d. Structures.pdf">0x0d. Structures.pdf</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/sF_gQY2e9CP95XbgWQkduA" target="_blank" title="struct (C programming language)">struct (C programming language)</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/7VySR2oMyxk7VMR8LLOvZA" target="_blank" title="Documentation: structures">Documentation: structures</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/kef9P9qRh_co4dxwHU8QGA" target="_blank" title="0x0d. Typedef and structures.pdf">0x0d. Typedef and structures.pdf</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/-vbMNPFrIA5PcVs4RiWr4g" target="_blank" title="typedef">typedef</a></li>
    <li><strong>Programming in C</strong> by Stephen Kochan - <em>Chapter 8, Working with Structures p163-189</em></li>
    <li><a href="https://intranet.hbtn.io/rltoken/92gDeb3TtzgLDpzo9DXfZg" target="_blank" title="The Lost Art of C Structure Packing">The Lost Art of C Structure Packing</a> (<em>Advanced - not mandatory</em>)</li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to <a href="https://intranet.hbtn.io/rltoken/SJC6PvFo2vSFZW0M7u-caw" target="_blank" title="explain to anyone">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>What are structures, when, why and how to use them</li>
    <li>How to use <code>typedef</code></li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
    <li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
    <li>All your files should end with a new line</li>
    <li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
    <li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
    <li>You are not allowed to use global variables</li>
    <li>No more than 5 functions per file</li>
    <li>The only C standard library functions allowed are <code>printf</code>, <code>malloc</code>, <code>free</code> and <code>exit</code>.</li>
    <li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
    <li>Don&rsquo;t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
</ul>
<h2>Tasks</h2>
<div>
    <div>
        <div>
            <h3>0. Poppy</h3>
            <p>Define a new type <code>struct dog</code> with the following elements:</p>
            <ul>
                <li><code>name</code>, type = <code>char *</code></li>
                <li><code>age</code>, type = <code>float</code></li>
                <li><code>owner</code>, type = <code>char *</code></li>
            </ul>
            <div>
                <h3>1. A dog is the only thing on earth that loves you more than you love yourself</h3>
            </div>
            <div>
                <p>Write a function that initialize a variable of type <code>struct dog</code></p>
                <ul>
                    <li>Prototype: <code>void init_dog(struct dog *d, char *name, float age, char *owner);</code></li>
                </ul>
                <h3>2. A dog will teach you unconditional love. If you can have that in your life, things won&apos;t be too bad</h3>
                <p>Write a function that prints a&nbsp;<code>struct dog</code></p>
                <ul>
                    <li>Prototype: <code>void print_dog(struct dog *d);</code></li>
                    <li>Format: see example bellow</li>
                    <li>You are allowed to use the standard library</li>
                    <li>If an element of <code>d</code> is <code>NULL</code>, print <code>(nil)</code> instead of this element. (if <code>name</code> is <code>NULL</code>, print <code>Name: (nil)</code>)</li>
                    <li>If <code>d</code> is <code>NULL</code> print nothing.</li>
                </ul>
                <h3>3. Outside of a dog, a book is a man&apos;s best friend. Inside of a dog it&apos;s too dark to read</h3>
                <div>Define a new type <code>dog_t</code> as a new name for the type <code>struct dog</code>.&nbsp;</div>
                <h3>4. A door is what a dog is perpetually on the wrong side of</h3>
                <p>Write a function that creates a new dog.</p>
                <ul>
                    <li>Prototype:&nbsp;<code>dog_t *new_dog(char *name, float age, char *owner);</code></li>
                    <li>You have to store a copy of&nbsp;<code>name</code> and&nbsp;<code>owner</code></li>
                    <li>Return&nbsp;<code>NULL</code> if the function fails</li>
                </ul>
                <h3>5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn&apos;t make it a leg</h3>
                <p>Write a function that frees dogs.</p>
                <p>Prototype: void free_dog(dog_t *d);</p>
            </div>
        </div>
    </div>
</div>
