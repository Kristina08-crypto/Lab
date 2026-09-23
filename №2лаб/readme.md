# Домашнее задание к работе 2

## Условие задачи
В первом сосуде содержится V1 литров воды температуры t1, во втором - V2 литров воды температуры t2, в третьем - V3 литров воды температуры t3. Воду слили в один сосуд. Найти объем и температуру воды в этом сосуде. 

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Известные данные
    - V1 = 2 (объем первой воды)
    - t1 = 20 (температура первой воды)
    - V2 = 3 (объем второй воды)
    - t2 = 30 ( температура второй воды)
    - V3 = 5 (объем третьей воды)
    - t3 = 40 ( температура третьей воды)
3. Вычисления

    Общий объем равен:  V = V1 + V2 + V3

    2+3+5=10

    Температура равна: t = (V1 * t1 + V2 * t2 + V3 * t3) / V

    (2*20+3*30+5*40)/10=33 С

4. Вывод ответа

    Ответ: 10 л, 33 C

5. Конец

# Блок схема:
<mxGraphModel dx="1471" dy="2120" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
  <root>
    <mxCell id="0" />
    <mxCell id="1" parent="0" />
    <mxCell id="dcjt2wPIwxxK38MbmFTx-1" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#ffe6cc;strokeColor=#d79b00;shadow=0;" value="&lt;b&gt;&lt;font style=&quot;font-size: 17px;&quot;&gt;начало&lt;/font&gt;&lt;/b&gt;" vertex="1">
      <mxGeometry height="70" width="110" x="329.99" y="-40" as="geometry" />
    </mxCell>
    <mxCell id="dcjt2wPIwxxK38MbmFTx-2" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;fontStyle=1;fillColor=#e1d5e7;strokeColor=#9673a6;fontSize=15;shadow=0;" value="V1=2, t1=20, V2=3, t2=30, v3=5, t3=40&lt;br&gt;&lt;div&gt;&lt;br&gt;&lt;/div&gt;" vertex="1">
      <mxGeometry height="70" width="241.25" x="264.37" y="70" as="geometry" />
    </mxCell>
    <mxCell id="dcjt2wPIwxxK38MbmFTx-3" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;shadow=0;" value="">
      <mxGeometry height="50" relative="1" width="50" as="geometry">
        <mxPoint x="384.5" y="30" as="sourcePoint" />
        <mxPoint x="384.5" y="70" as="targetPoint" />
      </mxGeometry>
    </mxCell>
    <mxCell id="dcjt2wPIwxxK38MbmFTx-10" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;shadow=0;" value="">
      <mxGeometry height="50" relative="1" width="50" as="geometry">
        <mxPoint x="384.5" y="140" as="sourcePoint" />
        <mxPoint x="384.5" y="190" as="targetPoint" />
      </mxGeometry>
    </mxCell>
    <mxCell id="dcjt2wPIwxxK38MbmFTx-11" parent="1" style="rounded=0;whiteSpace=wrap;html=1;align=center;fontStyle=1;fillColor=#f8cecc;strokeColor=#b85450;fontSize=18;shadow=0;" value="&lt;font style=&quot;font-size: 16px;&quot;&gt;V = V1 + V2 + V3&lt;/font&gt;" vertex="1">
      <mxGeometry height="70" width="210" x="279.99" y="190" as="geometry" />
    </mxCell>
    <mxCell id="dcjt2wPIwxxK38MbmFTx-12" edge="1" parent="1" style="endArrow=classic;html=1;rounded=0;shadow=0;" value="">
      <mxGeometry height="50" relative="1" width="50" as="geometry">
        <mxPoint x="384.5" y="260" as="sourcePoint" />
        <mxPoint x="384.5" y="310" as="targetPoint" />
      </mxGeometry>
    </mxCell>
    <mxCell id="dcjt2wPIwxxK38MbmFTx-13" parent="1" style="rounded=0;whiteSpace=wrap;html=1;fillColor=#dae8fc;strokeColor=#6c8ebf;shadow=0;" value="&lt;b&gt;&lt;font style=&quot;font-size: 16px;&quot;&gt;t =(V1*t1+V2*t2+V3*t3)/V&lt;/font&gt;&lt;/b&gt;" vertex="1">
      <mxGeometry height="70" width="241.25" x="264.37" y="310" as="geometry" />
    </mxCell>
    <mxCell id="dcjt2wPIwxxK38MbmFTx-16" edge="1" parent="1" style="edgeStyle=none;orthogonalLoop=1;jettySize=auto;html=1;rounded=0;shadow=0;" value="">
      <mxGeometry relative="1" width="100" as="geometry">
        <Array as="points" />
        <mxPoint x="384.49" y="380" as="sourcePoint" />
        <mxPoint x="384.49" y="430" as="targetPoint" />
      </mxGeometry>
    </mxCell>
    <mxCell id="dcjt2wPIwxxK38MbmFTx-18" parent="1" style="shape=parallelogram;perimeter=parallelogramPerimeter;whiteSpace=wrap;html=1;shapeInside=1;fixedSize=1;fillColor=#e1d5e7;strokeColor=#9673a6;fontStyle=0;shadow=0;" value="&lt;b&gt;&lt;font style=&quot;font-size: 18px;&quot;&gt;V, t&lt;/font&gt;&lt;/b&gt;" vertex="1">
      <mxGeometry height="60" width="241.25" x="264.37" y="430" as="geometry" />
    </mxCell>
    <mxCell id="dcjt2wPIwxxK38MbmFTx-20" edge="1" parent="1" style="edgeStyle=none;orthogonalLoop=1;jettySize=auto;html=1;rounded=0;shadow=0;" value="">
      <mxGeometry relative="1" width="100" as="geometry">
        <Array as="points" />
        <mxPoint x="384.49" y="490" as="sourcePoint" />
        <mxPoint x="384.49" y="540" as="targetPoint" />
      </mxGeometry>
    </mxCell>
    <mxCell id="dcjt2wPIwxxK38MbmFTx-22" parent="1" style="ellipse;whiteSpace=wrap;html=1;shapeInside=1;fillColor=#ffe6cc;strokeColor=#d79b00;shadow=0;" value="&lt;b&gt;&lt;font style=&quot;font-size: 17px;&quot;&gt;конец&lt;/font&gt;&lt;/b&gt;" vertex="1">
      <mxGeometry height="70" width="110" x="329.99" y="540" as="geometry" />
    </mxCell>
  </root>
</mxGraphModel>

## 2. Реализация программы

    #include <stdio.h>

    #include <locale.h>

    main()
 
    {
    
    setlocale(LC_ALL, "RUS");

    int V1 = 2;   // объем первой воды
    int t1 = 20;  // температура первой воды
    int V2 = 3;   // объем второй воды
    int t2 = 30;  // температура второй воды
    int V3 = 5;   // объем третьей воды
    int t3 = 40;  // температура третьей воды

    // расчет общего объема
    int V = V1 + V2 + V3;

    // расчет температуры
    int t = (V1 * t1 + V2 * t2 + V3 * t3) / V;

    // вывод
    printf("Объем воды равен: %d + %d + %d = %d л\n", V1, V2, V3, V);
    printf("Температура воды равна: %d C\n", t);

    printf("Ответ: %d л, %d C\n", V, t);

    }
# Результаты работы программы
Объем воды равен: 2 + 3 + 5 = 10 л

Температура воды равна: 33 C

Ответ: 10 л, 33 C

# Информация о разработчике
Порошкова Кристина
бОТИ-262